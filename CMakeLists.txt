cmake_minimum_required(VERSION 3.22)
project(Mimikyu C)

set(CMAKE_C_STANDARD 11)

include_directories(src)

add_library(Mimikyu STATIC src/mimikyu.h
                           src/mimikyu/string.h
                           src/mimikyu.c)

install(TARGETS Mimikyu ARCHIVE DESTINATION lib
                        PUBLIC_HEADER DESTINATION include)
