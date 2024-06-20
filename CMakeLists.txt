cmake_minimum_required(VERSION 3.1...3.25)

project(
    Reaction
    VERSION 0.1.0
    LANGUAGES C CXX
)

option(REACTION_BUILD_TESTS "Build tests" ON)

set(CMAKE_CXX_STANDARD 20)


add_subdirectory(external/glm)
add_subdirectory(src)

if(REACTION_BUILD_TESTS)
    add_subdirectory(external/googletest)
    add_subdirectory(test)
endif()
