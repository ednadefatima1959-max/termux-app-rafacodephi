#!/usr/bin/env bash
set -euo pipefail

# Sincroniza lista de pacotes do upstream termux/termux-packages
# e regenera rafaelia/src/main/cpp/raf_termux_packages.c com IDs FNV-1a 32-bit
# + hash de verificacao secundario.

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
OUT_C="$ROOT_DIR/rafaelia/src/main/cpp/raf_termux_packages.c"
TMP_DIR="$(mktemp -d)"
trap 'rm -rf "$TMP_DIR"' EXIT

UPSTREAM_URL="${1:-https://github.com/termux/termux-packages.git}"

printf '[sync] clone %s\n' "$UPSTREAM_URL"
git clone --depth 1 "$UPSTREAM_URL" "$TMP_DIR/termux-packages" >/dev/null 2>&1

printf '[sync] gerar tabela deterministica\n'
python - "$TMP_DIR/termux-packages" "$OUT_C" <<'PY'
import sys
from pathlib import Path

repo = Path(sys.argv[1])
out_c = Path(sys.argv[2])

pkg_dir = repo / "packages"
names = sorted([p.name for p in pkg_dir.iterdir() if p.is_dir() and (p / "build.sh").exists()])

def fnv1a32(data: bytes) -> int:
    h = 2166136261
    for b in data:
        h ^= b
        h = (h * 16777619) & 0xFFFFFFFF
    return h

def fnv1a32_seed(data: bytes, seed: int) -> int:
    h = seed & 0xFFFFFFFF
    for b in data:
        h ^= b
        h = (h * 16777619) & 0xFFFFFFFF
    return h

lines = []
lines.append("/* raf_termux_packages.c")
lines.append("   IDs deterministicos de pacotes Termux (sem libc, gerado)")
lines.append("*/")
lines.append("")
lines.append("#include \"raf_termux_packages.h\"")
lines.append("")
lines.append("#define RAF_TERMUX_PKG_VERIFY_SEED 0xA5A55A5Au")
lines.append("")
lines.append("#if RAF_TERMUX_PKG_NAME_PTR_ENABLE")
lines.append("#define RAF_PKG_INIT(ID, NLEN, FLG, VFY, NPTR) { (ID), (NLEN), (FLG), (VFY), (NPTR) }")
lines.append("")
lines.append("static const char g_termux_pkg_names[] =")
for nm in names:
    esc = nm.replace('\\', '\\\\').replace('"', '\\"')
    lines.append(f"  \"{esc}\\0\"")
lines.append("  ;")
lines.append("")
lines.append("static const u32 g_termux_pkg_name_offs[] = {")
off = 0
for nm in names:
    lines.append(f"  {off}u,")
    off += len(nm) + 1
lines.append("};")
lines.append("#else")
lines.append("#define RAF_PKG_INIT(ID, NLEN, FLG, VFY, NPTR) { (ID), (NLEN), (FLG), (VFY) }")
lines.append("#endif")
lines.append("")
lines.append("static const raf_termux_pkg_id_t g_termux_pkgs[] = {")
for idx, nm in enumerate(names):
    hid = fnv1a32(nm.encode("utf-8"))
    vfy = fnv1a32_seed(nm.encode("utf-8"), 0xA5A55A5A)
    lines.append(f"#if RAF_TERMUX_PKG_NAME_PTR_ENABLE")
    lines.append(f"  RAF_PKG_INIT(0x{hid:08x}u, {len(nm)}u, 0u, 0x{vfy:08x}u, &g_termux_pkg_names[g_termux_pkg_name_offs[{idx}u]]), /* {nm} */")
    lines.append(f"#else")
    lines.append(f"  RAF_PKG_INIT(0x{hid:08x}u, {len(nm)}u, 0u, 0x{vfy:08x}u, 0), /* {nm} */")
    lines.append(f"#endif")
lines.append("};")
lines.append("")
lines.append("static const raf_termux_pkg_table_t g_table = {")
lines.append("  g_termux_pkgs,")
lines.append(f"  {len(names)}u,")
lines.append("  2166136261u,")
lines.append("  0x52414650u")
lines.append("};")
lines.append("")
lines.append("const raf_termux_pkg_table_t *RmR_termux_packages(void){")
lines.append("  return &g_table;")
lines.append("}")
lines.append("")

out_c.write_text("\n".join(lines), encoding="utf-8")
print(f"[sync] pacotes: {len(names)}")
PY

printf '[sync] pronto: %s\n' "$OUT_C"
