
cmake_minimum_required(VERSION 3.15)
project(cppv20)

add_library(cppv20
	lib/League.cpp
	lib/Team.cpp
	lib/Ground.cpp
	lib/Player.cpp
)
target_include_directories(cppv20 PUBLIC include)

add_executable(cppv20.out src/cppv20.cpp)
target_link_libraries(cppv20.out cppv20)
