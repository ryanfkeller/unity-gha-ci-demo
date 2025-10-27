add_executable(Logic_test
    logic.test.c
)

target_link_libraries(Logic_test
    Logic_lib
    Unity
)

add_test(NAME LogicTest COMMAND Logic_test)