if(WIN32)
        cmake_minimum_required(VERSION 3.14)
else()
        cmake_minimum_required(VERSION 3.11)
endif()

# set the project name
project(ydbms VERSION 0.1)

# add the executable
add_executable(ydbms 
${CMAKE_SOURCE_DIR}/source/ymain.cpp
${CMAKE_SOURCE_DIR}/source/ycmd.cpp
${CMAKE_SOURCE_DIR}/source/yerrorlog.cpp
${CMAKE_SOURCE_DIR}/source/yqueue.cpp
${CMAKE_SOURCE_DIR}/source/yredolog.cpp
${CMAKE_SOURCE_DIR}/source/ysession.cpp
${CMAKE_SOURCE_DIR}/source/ytable.cpp
${CMAKE_SOURCE_DIR}/source/ytableondisk.cpp
${CMAKE_SOURCE_DIR}/source/ytranlog.cpp
${CMAKE_SOURCE_DIR}/source/ytransaction.cpp)

option(USE_YMEMORY "Use in-memory tables" ON)

if(USE_YMEMORY)
  add_subdirectory(memory)
  list(APPEND EXTRA_LIBS ymemory)
endif()

target_link_libraries(ydbms PUBLIC ${EXTRA_LIBS})
set_property(TARGET ydbms PROPERTY CXX_STANDARD 11)
configure_file(${CMAKE_SOURCE_DIR}/config/ydbmscfg.h.in ydbmscfg.h)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(ydbms PUBLIC 
	${CMAKE_SOURCE_DIR}/include
	${EXTRA_INCLUDES}
	"${PROJECT_BINARY_DIR}" )

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

install(TARGETS ydbms DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/ydbmscfg.h" DESTINATION include)

	
