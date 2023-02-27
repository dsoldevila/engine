add_library(logger Logger.cpp)
add_dependencies(logger spdlog)
target_include_directories(logger PUBLIC ${PROJECT_SOURCE_DIR}/build/include)


add_library(engine Application.cpp)
target_link_libraries(engine PUBLIC logger)