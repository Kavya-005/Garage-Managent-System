cmake_minimum_required(VERSION 3.5)

project(my_project)

set(CMAKE_CXX_STANDARD 11)

add_executable(main main.cpp db.cpp)

include_directories(/usr/include/jsoncpp)

find_package(OpenCV REQUIRED)
target_link_libraries(main ${OpenCV_LIBS} curl crypto jsoncpp sqlite3)
