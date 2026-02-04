# BITRAF Low-Level Core (Refactor "NEW")

Este documento registra as extensões de baixo nível aplicadas ao núcleo BITRAF para refletir os blocos do diagrama (núcleo central, hooks low-level, manifesto determinístico e telemetria). O conteúdo foi escrito para manter o núcleo freestanding, sem dependências de libc ou bibliotecas nativas.

## Núcleo Central (Core)
- Mantém o motor BITRAF (D/I/P/R), slot10, base20, paridade dupla e atrator 42.
- Expõe inicialização do store com identificação de arquitetura e barramento.

## Hooks Low-Level (ARQU)
- Estrutura de hooks para leitura, escrita e barreira (sincronização) com ponteiros de função.
- Permite integração com UART/MMIO ou outros backends sem libc.

## Manifesto Determinístico
- Matriz estática 8×8 aplicada no store para representar o bloco “Matriz Estática”.
- Checksum determinístico via CRC16 interno para controle de integridade.

## Telemetria
- Contadores mínimos de tick/steps/points e metadados de última execução.
- Campos mantidos no store para leitura por camadas superiores (CTI/OMEGA).

## Observações de build
- O núcleo permanece freestanding-friendly (sem libc).
- As funções utilitárias são internas e não dependem de pacotes do ambiente.
