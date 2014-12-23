
cmake_minimum_required (VERSION 2.6)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

project (mathfunc)




set(mathfunc )
add_executable(math ${mathfunc})



enable_testing()

add_test(TEST math)
