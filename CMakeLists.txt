project(Pixmap-Ops)
cmake_minimum_required(VERSION 2.8.11)

if (WIN32) # Include win64 platforms

  set(CMAKE_CXX_STANDARD 11)
  set(CMAKE_CXX_FLAGS 
     "/wd4018 /wd4244 /wd4305 
     /D_CRT_SECURE_NO_WARNINGS 
     /D_CRT_NONSTDC_NO_DEPRECATE 
     /D NOMINMAX /DGLEW_STATIC
     /EHsc")

  set(CMAKE_EXE_LINKER_FLAGS "/NODEFAULTLIB:\"MSVCRT\" /NODEFAULTLIB:\"LIBCMT\"")
  set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

elseif (APPLE)

  set(CMAKE_MACOSX_RPATH 1)
  set(CMAKE_CXX_FLAGS "-Wall -Wno-deprecated-declarations -g -stdlib=libc++ -std=c++11")
  set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)
  set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
  add_definitions(-DAPPLE)

elseif (UNIX)

  set(CMAKE_CXX_FLAGS "-Wall -g -std=c++11 -Wno-comment")
  set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)
  set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
  add_definitions(-DUNIX)

endif()

add_executable(pixmap_test pixmap_test.cpp ppm_image.cpp ppm_image.h)
target_link_libraries(pixmap_test)

add_executable(pixmap_art pixmap_art.cpp ppm_image.cpp ppm_image.h)
target_link_libraries(pixmap_art)
