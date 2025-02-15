option(BUILD_EXAMPLE "Build an example widget factory app" ON)
if (BUILD_EXAMPLE)
    add_subdirectory(demo)
endif()

add_subdirectory(lib)
add_subdirectory(style)
