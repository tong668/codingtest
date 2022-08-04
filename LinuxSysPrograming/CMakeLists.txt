cmake_minimum_required(VERSION 3.10)
project(LinuxSysPrograming)

set(CMAKE_C_STANDARD 11)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib)

#aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC_LIST)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/fileio Fileio_SRC_LIST)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/lib Lib_SRC_LIST)

add_executable(${PROJECT_NAME}
        ${SRC_LIST}
        ${Fileio_SRC_LIST}
        ${Lib_SRC_LIST})
