file(GLOB_RECURSE UNIT_SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.cpp")

add_executable(ReactionCustomTests ${UNIT_SOURCES})

target_include_directories(ReactionCustomTests
    PUBLIC ${CMAKE_SOURCE_DIR}/external/glm/
    PUBLIC ${CMAKE_SOURCE_DIR}/src/
)

target_link_libraries(ReactionCustomTests ${PROJECT_NAME} glm)