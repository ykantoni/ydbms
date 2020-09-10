add_library(ymemory ${CMAKE_SOURCE_DIR}/memory/ymemory.cpp)

set_property(TARGET ymemory PROPERTY CXX_STANDARD 11)
INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/include)

# target_include_directories(ymemory INTERFACE ${CMAKE_SOURCE_DIR}/include)

install(TARGETS ymemory DESTINATION lib)
install(FILES ymemory.h DESTINATION include/memory)



