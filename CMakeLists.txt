cmake_minimum_required(VERSION 2.6)
project(php_mod_log)

add_executable(php_mod_log main.cpp)

install(TARGETS php_mod_log RUNTIME DESTINATION bin)
