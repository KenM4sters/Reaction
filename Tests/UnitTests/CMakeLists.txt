add_executable(KatanaUnitTests
    main.cpp
)

target_include_directories(KatanaUnitTests
    PUBLIC ${CMAKE_SOURCE_DIR}/External/GoogleTest/googletest/include/
    PUBLIC ${CMAKE_SOURCE_DIR}/Source/
)

target_link_libraries(KatanaUnitTests ${CMAKE_PROJECT_NAME} gtest_main)