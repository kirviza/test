cmake_minimum_required(VERSION 2.8)

project(test CXX)

file(GLOB HEADERS *.h)
file(GLOB SOURCES *.cpp)

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})
