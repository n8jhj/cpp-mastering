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
    "src/02_basics/001_array.cpp"
    "src/02_basics/002_struct.cpp"
    "src/02_basics/003_pointer.cpp"
    "src/02_basics/004_reference.cpp"
    "src/02_basics/005_pointer_to_struct.cpp"
    "src/02_basics/006_function.cpp"
    "src/02_basics/007_parameter_passing.cpp"
    "src/02_basics/008_array_as_parameter.cpp"
    "src/02_basics/009_struct_as_parameter.cpp"
    "src/02_basics/010_monolithic_program.cpp"
)

# Add the binary tree to the search path for include files.
target_include_directories(main PUBLIC "${PROJECT_SOURCE_DIR}/include")
