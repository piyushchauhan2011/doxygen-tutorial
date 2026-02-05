# Doxygen Tutorial Starter

This repository is a small starter for learning C++, CMake, Doxygen, and GoogleTest/GoogleMock.

Quick start (macOS):

```bash
# install prerequisites (if needed)
xcode-select --install
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
brew update
brew install cmake doxygen graphviz git ninja

# Configure & build (Ninja generator recommended)
# single build directory (recommended):
cmake -S . -B build -G Ninja
cmake --build build

# Run the app
./build/bin/app

# Run tests
ctest --test-dir build --output-on-failure

# Generate docs (Doxygen must be installed)
cmake --build build --target doc
# open the generated HTML (try both common locations)
open build/docs/html/index.html || open build/html/index.html
```

## Convenience

You can run the provided helper script which auto-detects Ninja, builds, runs tests, and opens docs:

```bash
./build.sh
```

## Using CMake presets (optional)

Use presets to create and build separate build directories for debug/release:

```bash
cmake --preset debug      # configures into build-debug (see CMakePresets.json)
cmake --build build-debug

cmake --preset release
cmake --build build-release
```

## Explicit build-type directories (alternative)

If you prefer not to use presets, create separate build directories and pass the generator and build type explicitly:

```bash
# Debug
cmake -S . -B build-debug -G Ninja -DCMAKE_BUILD_TYPE=Debug
cmake --build build-debug

# Release
cmake -S . -B build-release -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build-release
```
