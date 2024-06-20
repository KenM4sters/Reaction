#!/bin/bash
mkdir -p build
cd build
cmake -DREACTION_BUILD_TESTS=ON ..
cmake --build .
