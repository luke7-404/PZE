cmake_minimum_required(VERSION 3.31)

if(DEFINED ENV{VCPKG_ROOT} AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
    set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake"
        CACHE FILEPATH "vcpkg toolchain file")
endif()

project(MyProject LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_C_STANDARD 23)

#install library using vcpkg
#find_package(package name CONFIG REQUIRED)

add_executable(main
    src/main.cpp
    src/test.c
    src/test.cpp
)
target_include_directories(main PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/inc")
#target_link_libraries(main PRIVATE package_name::package_name)