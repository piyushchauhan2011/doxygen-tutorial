# Doxygen Tutorial Starter

This repository is a small starter for learning C++, CMake, Doxygen, and GoogleTest/GoogleMock.

Quick start (macOS):

```bash
# install prerequisites (if needed)
xcode-select --install
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
brew update
brew install cmake doxygen graphviz git

# configure and build
cmake -S . -B build
cmake --build build

# run tests
ctest --test-dir build --output-on-failure

# generate docs (if Doxygen available)
cmake --build build --target doc
open build/docs/html/index.html
```
