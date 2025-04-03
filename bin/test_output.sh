#/bin/bash

set -e

g++ -std=c++23 -o run_solution main.cpp -fdiagnostics-color=always -lm 2>&1
test.sh
