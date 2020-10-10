add_library(ycolumnar ${CMAKE_SOURCE_DIR}/columnar/ycolumnar.cpp)

set_property(TARGET ycolumnar PROPERTY CXX_STANDARD 11)
INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/include/columnar)

target_include_directories(ycolumnar INTERFACE ${CMAKE_SOURCE_DIR}/include/columnar)

install(TARGETS ycolumnar DESTINATION lib)
install(FILES ycolumnar.h DESTINATION include/columnar)



