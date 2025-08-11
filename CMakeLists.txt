cmake_minimum_required(VERSION 3.13)
project(MiniMath LANGUAGE CXX)

set(CMAKE_CXX_STANDARD 17)
find_package(LLVM REQUIRED CONFIG)

include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

add_executable(minimath
  main.cpp
  Lexer.cpp
  Parser.cpp
  Codege.cpp
)

llvm_map_components_to_libnames(llvm_libs support core irreader executionengine orcjit native)
target_link_libraries(minimath ${llvm_libs})

