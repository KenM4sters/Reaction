add_executable(KatanaCustomTests
    main.cpp
)

target_include_directories(KatanaCustomTests
    PUBLIC ${CMAKE_SOURCE_DIR}/Source/
)

target_link_libraries(KatanaCustomTests ${CMAKE_PROJECT_NAME})

