get_filename_component(TARGET_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME) 

set(SOURCES 
    main.cpp
)

add_executable(${TARGET_NAME} ${SOURCES})

target_link_libraries(${TARGET_NAME} PUBLIC 
    Qt6::Core
    Qt6::Widgets
)


