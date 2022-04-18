# The ability to specify the C++17 standard was added in CMake version 3.8.
cmake_minimum_required(VERSION 3.8)

# Set the project name.
project(CPPMastering)

# Specify the C++ standard.
set(CMAKE_CXX_STANDARD 17)

# Add the main executable.
add_executable(
    main
    "main.cpp"
    "src/basics/001_array.cpp"
    "src/basics/002_struct.cpp"
    "src/basics/003_pointer.cpp"
    "src/basics/004_reference.cpp"
    "src/basics/005_pointer_to_struct.cpp"
    "src/basics/006_function.cpp"
    "src/basics/007_parameter_passing.cpp"
    "src/basics/008_array_as_parameter.cpp"
    "src/basics/009_struct_as_parameter.cpp"
)

# Add the binary tree to the search path for include files.
target_include_directories(main PUBLIC "${PROJECT_SOURCE_DIR}/include")
