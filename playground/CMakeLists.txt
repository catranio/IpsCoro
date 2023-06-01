ips_add_target(${PROJECT_NAME}.playground EXECUTABLE
        SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*
        DEPENDS IpsCoro)

ips_pedantic_error(${PROJECT_NAME}.playground)