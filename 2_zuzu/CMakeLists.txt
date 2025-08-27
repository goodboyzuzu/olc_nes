cmake_minimum_required(VERSION 3.10) # Set minimum CMake version

# Define the project name
project(NES_Emulator VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add an executable, specifying the source files
add_executable(debug main.cpp olc6502.cpp Bus.cpp)