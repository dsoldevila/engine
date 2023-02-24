add_library(engine Application.cpp)
add_dependencies(engine spdlog)

target_include_directories(engine PRIVATE ${PROJECT_SOURCE_DIR}/lib/spdlog/include)