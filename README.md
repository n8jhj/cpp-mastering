# C++ Mastering

This repository is for working along with the Udemy course [Mastering Data Structures & Algorithms using C and C++](https://www.udemy.com/course/datastructurescncpp).

## Build and run the code

CMake is used to build the project. To generate the buildsystem, first run the following from within the cpp-mastering directory:

`cmake -S . -B build`

Then, to build the project, run:

`cmake --build build/`

Now the main executable can be found in the build directory. To execute it, run:

`./build/main`

## Project architecture

The project is laid out with `src` and `include` directories.
- `src`: Contains C++ source code.
- `include`: Contains C++ header files.

Within each of `src` and `include`, sub-directories correspond to Sections of the course and are prefixed with the section number. Files within those sub-directories are also prefixed with lesson numbers. This is to keep source code files in an order that corresponds to the order of the course.
