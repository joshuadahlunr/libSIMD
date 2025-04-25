cmake_minimum_required(VERSION 3.21)
project(libSIMD C CXX)

set(CMAKE_CXX_STANDARD 26)

include(cmake/FetchSIMD.cmake)

set(CMAKE_INTERPROCEDURAL_OPTIMIZATION true)

add_library(libsimd simd/i8.cpp simd/u8.cpp simd/i16.cpp simd/u16.cpp simd/i32.cpp simd/u32.cpp simd/f32.cpp simd/i64.cpp simd/u64.cpp simd/f64.cpp)
set_target_properties(libsimd PROPERTIES OUTPUT_NAME "simd")
target_include_directories(libsimd PRIVATE ${std_simd_SOURCE_DIR}/experimental)
target_include_directories(libsimd PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
# target_compile_options(libsimd PUBLIC -march=native)