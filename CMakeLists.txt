cmake_minimum_required(VERSION 3.27)

project(CrowExampleAPIApp VERSION 0.0.0)

set(CMAKE_CXX_STANDARD 17)

add_executable(APIApp Main.cpp)
include_directories("../Crow/include")
include_directories("/opt/homebrew/Cellar/asio/1.28.1/include/")
install(TARGETS APIApp DESTINATION bin)
