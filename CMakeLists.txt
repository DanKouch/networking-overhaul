cmake_minimum_required(VERSION 3.15)
project(networking_overhaul)

set(CMAKE_CXX_STANDARD 14)

include_directories(./src)
add_executable(networking_overhaul src/init.cpp src/main.cpp ./libs/PracticalSocket/PracticalSocket.cpp src/TelemetryLoop.cpp src/TelemetryLoop.h src/retro.h src/hv_iox.h src/hv_iox.c src/lv_iox.h src/lv_iox.c)

# External Libraries
include_directories(./libs/PracticalSocket)
include_directories(./libs/CRCpp)
target_link_libraries(networking_overhaul pthread)
