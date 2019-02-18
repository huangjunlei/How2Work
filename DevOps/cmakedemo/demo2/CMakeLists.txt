cmake_minimum_required(VERSION 2.8.9)
project(directory_test)

#Bring the headers, such as Employee.h into the project
include_directories(include)

#Can manually add the sources using the set command as follows:
#set(SOURCES src/mainapp.cpp src/Employee.cpp)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

add_executable(testDemo2 ${SOURCES})