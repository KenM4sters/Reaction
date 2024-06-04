
add_library(${CMAKE_PROJECT_NAME}
    Resolver.cpp
)

target_include_directories(${CMAKE_PROJECT_NAME} 
    PUBLIC ${CMAKE_SOURCE_DIR}/Sources/ 
    PUBLIC ${CMAKE_SOURCE_DIR}/External/Essence/ 
)

# Find the library
find_library(EssenceLib NAMES Essence PATHS ${CMAKE_SOURCE_DIR}/External/Essence/)

# Check if the library was found
if(EssenceLib)
    message(STATUS "Found Essence library: ${EssenceLib}")
else()
    message(FATAL_ERROR "Essence library not found")
endif()

target_link_libraries(${CMAKE_PROJECT_NAME} ${EssenceLib})