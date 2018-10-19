cmake_minimum_required(VERSION 3.5)
# this sets the project
project(ImageWriter)

find_package(ImageMagick COMPONENTS Magick++)

include_directories(${ImageMagick_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 17)

set(SOURCES main.cpp )

add_executable(ImageWriter ${SOURCES})
target_link_libraries(ImageWriter ${ImageMagick_LIBRARIES})
