cmake_minimum_required(VERSION 3.19)
project(mwm-engine)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_BINARY_DIR}/install)

add_subdirectory(Engine)
add_subdirectory(SandBox)