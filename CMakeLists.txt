cmake_minimum_required(VERSION 3.15)
project(networking_overhaul)

set(CMAKE_CXX_STANDARD 14)


include_directories(./src)
add_executable(networking_overhaul src/init.cpp src/main.cpp ./libs/PracticalSocket/PracticalSocket.cpp src/TelemetryLoop.cpp src/TelemetryLoop.h src/retro.h)

# External Libraries
include_directories(./libs/PracticalSocket)
include_directories(./libs/Boost)
target_link_libraries(networking_overhaul pthread)
