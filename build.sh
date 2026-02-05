#!/usr/bin/env bash
set -euo pipefail

# Build helper: prefer Ninja if installed
GEN="Unix Makefiles"
if command -v ninja >/dev/null 2>&1; then
  GEN="Ninja"
fi

echo "Configuring with generator: $GEN"
cmake -S . -B build -G "$GEN"
cmake --build build

echo "Running tests"
ctest --test-dir build --output-on-failure

if command -v doxygen >/dev/null 2>&1; then
  echo "Generating docs"
  cmake --build build --target doc || true
  if [ -f build/docs/html/index.html ]; then
    open build/docs/html/index.html || true
  elif [ -f build/html/index.html ]; then
    open build/html/index.html || true
  else
    echo "Docs generated but index.html not found in expected locations"
  fi
else
  echo "Doxygen not found; skip docs (install with: brew install doxygen graphviz)"
fi

echo "Done"
