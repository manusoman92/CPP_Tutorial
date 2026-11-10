cmake_minimum_required(VERSION 3.5)
project(MoveSematicsAndSmartPointers)

set(CMAKE_CXX_STANDARD 14)
file(GLOB_RECURSE SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/sources/*.cpp)
add_executable(${PROJECT_NAME} ${SRC_FILES})
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)