cmake_minimum_required(VERSION 3.14)

project(prac VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 11)
set(APP_SOURCES src/main.cpp)


add_executable(${PROJECT_NAME} ${APP_SOURCES})
