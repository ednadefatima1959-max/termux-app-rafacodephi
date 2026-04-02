#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
LOCAL_PROPERTIES="${ROOT_DIR}/local.properties"

candidate_sdk="${ANDROID_SDK_ROOT:-${ANDROID_HOME:-}}"

if [[ -z "${candidate_sdk}" ]]; then
  for path in \
    "$HOME/Android/Sdk" \
    "/usr/lib/android-sdk" \
    "/opt/android-sdk"; do
    if [[ -d "${path}" ]]; then
      candidate_sdk="${path}"
      break
    fi
  done
fi

if [[ -z "${candidate_sdk}" ]]; then
  cat <<'MSG'
[android-sdk-doctor] Android SDK not found.

Set one of the environment variables below and run again:
  export ANDROID_SDK_ROOT=/path/to/Android/Sdk
  export ANDROID_HOME=/path/to/Android/Sdk

Or create local.properties manually with:
  sdk.dir=/path/to/Android/Sdk
MSG
  exit 1
fi

if [[ ! -d "${candidate_sdk}" ]]; then
  echo "[android-sdk-doctor] SDK path does not exist: ${candidate_sdk}" >&2
  exit 1
fi

escaped_sdk="${candidate_sdk//\\/\\\\}"
printf 'sdk.dir=%s\n' "${escaped_sdk}" > "${LOCAL_PROPERTIES}"

echo "[android-sdk-doctor] Wrote ${LOCAL_PROPERTIES} with sdk.dir=${candidate_sdk}"

echo "[android-sdk-doctor] Next step: ./gradlew assembleDebug"
