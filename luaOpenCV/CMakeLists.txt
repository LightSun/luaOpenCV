cmake_minimum_required(VERSION 2.8)
project(luaOpenCV)



option(BUILD_TESTS "Builds the unit test" TRUE)
option(LOCAL_LUA_DIRECTORY "local lua library directory" "third_party/lua-5.3.6")
set(LOCAL_LUA_DIRECTORY "third_party/lua-5.3.6")

#include(cmake/FindLua.cmake)

set(LUA_INCLUDE_DIRS ${LOCAL_LUA_DIRECTORY}/src)
set(LUA_LIBRARY_DIRS ${LOCAL_LUA_DIRECTORY}/lib) #lib will to
set(LUA_LIBRARIES lua5.3.6)




set(CMAKE_PREFIX_PATH third_party/opencvlib)
#3.1.0 ?
FIND_PACKAGE(OpenCV REQUIRED)

include_directories(BEFORE ${LUA_INCLUDE_DIRS})
link_directories(${LUA_LIBRARY_DIRS})

include_directories(third_party/kaguya/include)
include_directories(BEFORE ${OpenCV_INCLUDE_DIRS})


if(MSVC)
 set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /bigobj")
else(MSVC)
 set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
endif(MSVC)


set(LUA_OPENCV_SRCS src/raw_bind.cc src/manual_bind.cc)
add_library(cv SHARED ${LUA_OPENCV_SRCS})
target_link_libraries(cv ${OpenCV_LIBS} ${LUA_LIBRARIES})



if(BUILD_TESTS)
  enable_testing()

  include_directories(third_party/googletest/googletest/include)
  include_directories(third_party/googletest/googletest/)
  set(GTEST_SRCS third_party/googletest/googletest/src/gtest-all.cc)
  
set(LUA_OPENCV_TEST_SRCS 
    test/test_main.cc
    test/test_mat.cc
    test/test_draw.cc
    test/test_type.cc
    test/test_image.cc)
  add_executable(test_runner ${GTEST_SRCS} ${LUA_OPENCV_SRCS} ${LUA_OPENCV_TEST_SRCS})
  target_link_libraries(test_runner ${OpenCV_LIBS} ${LUA_LIBRARIES})
  add_test(NAME cvbind_test COMMAND test_runner WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/test)

endif(BUILD_TESTS)
