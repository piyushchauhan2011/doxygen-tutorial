add_library(mylib STATIC math/math.cpp)
target_include_directories(mylib PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_executable(app main.cpp)
target_link_libraries(app PRIVATE mylib)
target_include_directories(app PRIVATE ${PROJECT_SOURCE_DIR}/include)
