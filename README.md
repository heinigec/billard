# billard

This project aims to write a numerical simulation of the cue sport billard.

## Compilation

cmake is used to build the executable. Execute the following steps:

1. mkdir build
2. cd build
3. cmake ..
4. make

## Coding guidelines

To format the code clang-format is used. Example of usage:

clang-format -style=google -i Ball.cpp