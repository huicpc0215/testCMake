cmake_minimum_required (VERSION 2.8)

project (Demo_2)

# find all source files in directory
# usage: aux_source_directory(<dir> <variable>)
aux_source_directory(. DIR_SRCS)

add_executable(Demo ${DIR_SRCS})
