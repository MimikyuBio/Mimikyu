cmake_minimum_required(VERSION 3.22)
project(Mimikyu C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

set(MIMIKYU_HEADER      src/mimikyu.h
                        src/mimikyu/string.h)

add_library(Mimikyu STATIC ${MIMIKYU_HEADER}
                           src/mimikyu.c)

set_target_properties(Mimikyu PROPERTIES PUBLIC_HEADER "${MIMIKYU_HEADER}")

install(TARGETS Mimikyu ARCHIVE DESTINATION "${CMAKE_INSTALL_PREFIX}/lib")

install(DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/src/ DESTINATION "${CMAKE_INSTALL_PREFIX}/include"
                  FILES_MATCHING PATTERN "*.h")
