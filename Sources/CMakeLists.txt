
add_library(${CMAKE_PROJECT_NAME}
    Resolver.cpp
)

target_include_directories(${CMAKE_PROJECT_NAME} 
    PUBLIC ${CMAKE_SOURCE_DIR}/Sources/ 
    PUBLIC ${CMAKE_SOURCE_DIR}/External/Essence/ 
)

target_link_libraries(${CMAKE_PROJECT_NAME} Essence)