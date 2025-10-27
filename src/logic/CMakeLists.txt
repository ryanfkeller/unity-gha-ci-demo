add_library(Logic_lib STATIC
    logic.c
)

target_include_directories(Logic_lib PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)