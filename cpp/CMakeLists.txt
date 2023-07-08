cmake_minimum_required(VERSION 3.20)
project(cpp)

set(Boost_INCLUDE_DIR /usr/local/Cellar/boost/1.82.0_1)
set(Boost_LIBRARY_DIR /usr/local/Cellar/boost/1.82.0_1/libs)

find_package(Boost REQUIRED COMPONENTS system thread)
include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIR})
add_executable(cpp main.cpp i3.cpp i3extend.cpp i4.cpp i5.cpp i6.cpp i5extend.cpp i7.cpp i7extend.cpp i8.cpp i9.cpp i10rvalue.cpp i10.cpp i10extend.cpp i11.cpp i12.cpp i13.cpp i14.cpp i15.cpp i16.cpp i18-20.cpp i17.cpp i20extend.cpp i21.cpp i22.cpp i23-24.cpp i25swap.cpp i26-27.cpp cmakelistandninja.md i28.cpp i29.cpp i30.cpp i31.cpp i32-40.cpp i41template.cpp i43.cpp i44-48.cpp i48enum.cpp rvalue.cpp i50.cpp i55boost.cpp highPerformance.cpp)

target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})

set(CMAKE_CXX_STANDARD 20)

