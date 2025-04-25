cmake_minimum_required(VERSION 3.21)
project(libSIMD C CXX)

include(cmake/FetchSIMD.cmake)

set(CMAKE_INTERPROCEDURAL_OPTIMIZATION true)

add_library(libsimd i8.cpp u8.cpp i16.cpp u16.cpp i32.cpp u32.cpp f32.cpp i64.cpp u64.cpp f64.cpp)
set_target_properties(libsimd PROPERTIES OUTPUT_NAME "simd")
target_include_directories(libsimd PRIVATE ${std_simd_SOURCE_DIR}/experimental)
target_compile_options(libsimd PUBLIC -march=native)

add_executable(tst test.cpp)
target_link_libraries(tst PUBLIC libsimd)