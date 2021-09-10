cmake_minimum_required(VERSION 3.0.0)
project(libtcod-hacking VERSION 0.1.0)

find_package(libtcod CONFIG REQUIRED)

include(CTest)
enable_testing()

add_executable(libtcod-hacking main.cpp)

target_link_libraries(libtcod-hacking PRIVATE libtcod::libtcod)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
