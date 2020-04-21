cmake_minimum_required(VERSION 3.15)
project(list C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(list
    doubly_Linked_list.h
    main.c
    sigal_linked_list.h)
