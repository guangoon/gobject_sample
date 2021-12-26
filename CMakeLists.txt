cmake_minimum_required(VERSION 3.0.0)
project(gobject_example VERSION 0.1.0)

include(CTest)
enable_testing()

find_package(PkgConfig REQUIRED)
pkg_check_modules(GLIB_PKG glib-2.0)


add_executable(gobject_example main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
include_directories(${GLIB_PKG_INCLUDE_DIRS})
target_link_libraries(gobject_example PRIVATE glib-2.0)
