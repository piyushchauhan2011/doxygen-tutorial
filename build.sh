#!/usr/bin/env bash
set -euo pipefail

cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure

if command -v doxygen >/dev/null 2>&1; then
  cmake --build build --target doc || true
  echo "Docs built at build/docs/html (if Doxygen available)"
fi
