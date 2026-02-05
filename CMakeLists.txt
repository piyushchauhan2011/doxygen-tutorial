cmake_minimum_required(VERSION 3.14)
project(doxygen_tutorial VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(src)

enable_testing()

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG main
)
FetchContent_MakeAvailable(googletest)

add_subdirectory(tests)

find_package(Doxygen)
if (Doxygen_FOUND)
  doxygen_add_docs(doc ${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR}/src README.md)
endif()
