cmake_minimum_required(VERSION 3.22.2)

project(ENGINE
		LANGUAGES CXX 
		VERSION 0.0.0
		DESCRIPTION "a description"
)

include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++20" COMPILER_SUPPORTS_CXX20)
SET(CMAKE_CXX_STANDARD 20)

add_library(engine src/engine/Application.cpp)
target_include_directories(engine PRIVATE src/engine)


add_executable(test test/test.cpp)
target_link_libraries(test engine)
target_include_directories(test PRIVATE src)