cmake_minimum_required(VERSION 2.8.9)
project(main)

#For the shared library:
set ( PROJECT_LINK_LIBS libtest.so )
link_directories( lib )

include_directories(lib/include)
 
add_executable(main main.cpp)
target_link_libraries(main ${PROJECT_LINK_LIBS} )
