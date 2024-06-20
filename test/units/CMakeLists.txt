file(GLOB_RECURSE UNIT_SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.cpp")

add_executable(ReactionUnitTests ${UNIT_SOURCES})

target_include_directories(ReactionUnitTests
    PUBLIC ${CMAKE_SOURCE_DIR}/external/googletest/googletest/include/
    PUBLIC ${CMAKE_SOURCE_DIR}/external/glm/
    PUBLIC ${CMAKE_SOURCE_DIR}/src/
)

target_link_libraries(ReactionUnitTests ${PROJECT_NAME} glm gtest_main)