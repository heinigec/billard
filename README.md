# billard

This project aims to write a numerical simulation of the cue sport billard.

## Requirements

- [Eigen (linear algebra)](http://eigen.tuxfamily.org/)
- [POV-Ray (rendering)](http://www.povray.org/)

## Compilation

cmake is used to build the executable. Execute the following steps:

1. mkdir build
2. cd build
3. cmake ..
4. make

## Coding guidelines

To format the code clang-format is used. Usage:

./format_code.sh

## Rendering

To render the example scene

1. cd rendering
2. povray render.pov