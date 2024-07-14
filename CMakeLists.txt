cmake_minimum_required(VERSION 3.10)
project(MinimalCFDLibrary)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directories
include_directories(include)

# Add source files
add_executable(MinimalCFDLibrary src/main.cpp src/grid.cpp src/solver.cpp)

# Add tests
enable_testing()
add_executable(test_grid tests/test_grid.cpp src/grid.cpp)
add_test(NAME TestGrid COMMAND test_grid)
