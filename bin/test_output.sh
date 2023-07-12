#/bin/bash

set -e

g++ -std=c++17 -o run_solution main.cpp -lm 2>&1
test.sh
