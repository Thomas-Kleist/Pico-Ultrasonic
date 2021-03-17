add_library(pico_ultrasonic ultrasonic.h ultrasonic.c)

target_link_libraries(pico_ultrasonic pico_stdlib hardware_gpio hardware_timer)

target_include_directories(pico_ultrasonic PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")


add_library(pico_ultrasonic_object ultrasonic.h ultrasonic.c ultrasonicObject.cpp ultrasonicObject.h)

target_link_libraries(pico_ultrasonic_object pico_stdlib hardware_gpio hardware_timer)

target_include_directories(pico_ultrasonic_object PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
