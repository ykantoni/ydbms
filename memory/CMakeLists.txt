add_library(ymemory ${CMAKE_SOURCE_DIR}/memory/ymemory.cpp)

target_include_directories(ymemory INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

install(TARGETS ymemory DESTINATION lib)
install(FILES ymemory.h DESTINATION include)



