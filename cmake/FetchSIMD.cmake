include(FetchContent)

# Fetch the reference implementation of std::simd
FetchContent_Declare(std_simd GIT_REPOSITORY https://github.com/VcDevel/std-simd.git)

FetchContent_MakeAvailable(std_simd)