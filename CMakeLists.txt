cmake_minimum_required(VERSION 3.22.2)

project(ENGINE
		LANGUAGES CXX 
		VERSION 0.0.0
		DESCRIPTION "a description"
)

include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++20" COMPILER_SUPPORTS_CXX20)
SET(CMAKE_CXX_STANDARD 20)


include(ExternalProject)
ExternalProject_Add(spdlog
    PREFIX spdlog
    SOURCE_DIR ${PROJECT_SOURCE_DIR}/lib/spdlog
    CMAKE_ARGS -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
    -DCMAKE_CXX_COMPILER=${CMAKE_CXX_COMPILER}
    -DCMAKE_C_COMPILER=${CMAKE_C_COMPILER}
    -DCMAKE_TOOLCHAIN_FILE=${CMAKE_TOOLCHAIN_FILE}
    -DCMAKE_INSTALL_PREFIX=${PROJECT_SOURCE_DIR}/build
    -DSPDLOG_BUILD_SHARED=OFF
)


add_subdirectory(src/engine)


add_executable(test test/test.cpp)
target_link_libraries(test PRIVATE engine)
target_include_directories(test PRIVATE src)
