cmake_minimum_required(VERSION 3.11)
project(hello.js)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall -target cheerp")
set(CMAKE_CXX_COMPILER "/Applications/cheerp/bin/clang++")
set(CMAKE_LINKER "/Applications/cheerp/bin/llvm-link")
set(CMAKE_AR "/Applications/cheerp/bin/llvm-ar")
set(CMAKE_NM "/Applications/cheerp/bin/llvm-nm")
set(CMAKE_OBJDUMP "/Applications/cheerp/bin/llvm-objdump")
set(CMAKE_RANLIB "/Applications/cheerp/bin/llvm-ranlib")

add_executable(hello.js src/main.cpp)

target_include_directories(hello.js PRIVATE /Applications/cheerp/include/client)