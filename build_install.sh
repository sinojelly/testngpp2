#!/bin/bash
# build and install

# fast fail
set -e

# Set the install path, should be absolute path
INSTALL_PATH=~/test_tools/testngpp2_install

cmake -B build . -DCMAKE_INSTALL_PREFIX=$INSTALL_PATH
cmake --build build --target install