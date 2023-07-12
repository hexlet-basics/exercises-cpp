#/bin/bash

set -e

g++ -std=c++17 -o run_test test.cpp -fdiagnostics-color=always -lm 2>&1
./run_test -fc -ni
