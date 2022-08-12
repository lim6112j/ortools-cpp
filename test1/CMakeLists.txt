cmake_minimum_required(VERSION 3.10)

# set the project name
project(Tutorial)

# add boost dependency
find_package(Boost)
include_directories(${Boost_INCLUDE_DIRS})
include_directories("../../../or-tools_MacOsX-12.2.1_v9.3.10497/include")
link_directories("../../../or-tools_MacOsX-12.2.1_v9.3.10497/lib")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
# add the executable
add_executable(Tutorial main.cpp)
target_link_libraries(Tutorial ortools)
