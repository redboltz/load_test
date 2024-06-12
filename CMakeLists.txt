cmake_minimum_required(VERSION 3.15)

project(load_test
  VERSION
    1.0
  DESCRIPTION
    "load test"
  LANGUAGES
    CXX
)

add_executable(on_cpu src/on_cpu.cpp)
add_executable(off_cpu src/off_cpu.cpp)
