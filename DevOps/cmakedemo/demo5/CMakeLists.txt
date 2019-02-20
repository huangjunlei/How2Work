cmake_minimum_required(VERSION 2.8.9)
project (TestLibrary)

#For the shared library:
set ( PROJECT_LINK_LIBS libtestEmployee.so )
link_directories( ../demo3/build )

#For the static library:
#set ( PROJECT_LINK_LIBS libtestEmployee.a )
#link_directories( ../demo4/build )

include_directories(../demo3/include)

add_executable(libtest libtest.cpp)
target_link_libraries(libtest ${PROJECT_LINK_LIBS} )
