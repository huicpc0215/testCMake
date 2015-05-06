cmake_minimum_required (VERSION 2.8)

project (Demo_2)

# find all source files in directory
# usage: aux_source_directory(<dir> <variable>)
#aux_source_directory(. DIR_SRCS)

# 添加子目录,并且能在子目录运行相应的cmake
add_subdirectory(math)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

add_executable(Demo main.cpp)

target_link_libraries(Demo MyAddtions MyDecrise)

