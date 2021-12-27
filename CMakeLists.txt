cmake_minimum_required(VERSION 3.0.0)
project(gobject_example VERSION 0.1.0)

set(CMAKE_C_FLAGS_DEBUG "O0 -ggdb -std=c99")
set(CMAKE_C_FLAGS_MINSIZEREL "O0 -ggdb -std=c99")
set(CMAKE_C_FLAGS_RELWITHDEBINFO "O0 -ggdb -std=c99")
set(CMAKE_C_FLAGS_RELEASE "O0 -ggdb -std=c99")

find_package(PkgConfig REQUIRED)
pkg_check_modules(GLIB_PKG  glib-2.0)

add_executable(gobject_example  pm_dlist.c main.c)
include_directories(${GLIB_PKG_INCLUDE_DIRS})
target_link_libraries(gobject_example  glib-2.0 gobject-2.0)
