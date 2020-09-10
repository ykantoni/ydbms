add_library(ymemory ${CMAKE_SOURCE_DIR}/memory/ymemory.cpp)

set_property(TARGET ymemory PROPERTY CXX_STANDARD 11)

target_include_directories(ymemory INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

install(TARGETS ymemory DESTINATION lib)
install(FILES ymemory.h DESTINATION include)



