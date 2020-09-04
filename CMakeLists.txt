cmake_minimum_required(VERSION 3.14)

# set the project name
project(ydbms VERSION 0.1)

# add the executable
add_executable(ydbms ${CMAKE_SOURCE_DIR}/source/ymain.cpp ${CMAKE_SOURCE_DIR}/source/ycmd.cpp ${CMAKE_SOURCE_DIR}/source/yerrorlog.cpp ${CMAKE_SOURCE_DIR}/source/yqueue.cpp ${CMAKE_SOURCE_DIR}/source/yredolog.cpp ${CMAKE_SOURCE_DIR}/source/ysession.cpp ${CMAKE_SOURCE_DIR}/source/ytable.cpp ${CMAKE_SOURCE_DIR}/source/ytableondisk.cpp ${CMAKE_SOURCE_DIR}/source/ytranlog.cpp ${CMAKE_SOURCE_DIR}/source/ytransaction.cpp)

configure_file(${CMAKE_SOURCE_DIR}/config/ydbmscfg.h.in ydbmscfg.h)
target_include_directories(ydbms PUBLIC "${PROJECT_BINARY_DIR}" )

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
	
