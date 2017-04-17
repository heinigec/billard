#!/bin/bash

wd=$(pwd)
cd $wd/src
clang-format -style=google -i *.cpp
cd $wd/include
clang-format -style=google -i *.hpp
