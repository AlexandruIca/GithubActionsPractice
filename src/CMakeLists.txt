set(ADDER_FILES ${ADDER_INCLUDE_DIR}/adder.hpp
                ${CMAKE_CURRENT_SOURCE_DIR}/adder.cpp)

add_library(adder STATIC ${ADDER_FILES})
add_library(add::adder ALIAS adder)
add_library(adder-shared SHARED ${ADDER_FILES})
add_library(add::adder-shared ALIAS adder-shared)

target_include_directories(adder PUBLIC ${ADDER_INCLUDE_DIR})
target_include_directories(adder-shared PUBLIC ${ADDER_INCLUDE_DIR})

target_link_libraries(adder PRIVATE project_warnings project_options)
target_link_libraries(adder-shared PRIVATE project_warnings project_options)
