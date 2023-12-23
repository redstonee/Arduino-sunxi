set(ARDUINO_CORE_DIR ${CMAKE_CURRENT_LIST_DIR}/cores/arduino)
set(ARDUINO_VARIANT_DIR ${CMAKE_CURRENT_LIST_DIR}/variants)

set(ARDUINO_CORE_SRC
    ${ARDUINO_CORE_DIR}/abi.cpp
    ${ARDUINO_CORE_DIR}/board.c
    ${ARDUINO_CORE_DIR}/core_debug.c
    ${ARDUINO_CORE_DIR}/HardwareSerial.cpp
    ${ARDUINO_CORE_DIR}/itoa.cpp
    ${ARDUINO_CORE_DIR}/main.cpp
    ${ARDUINO_CORE_DIR}/pins_arduino.cpp
    ${ARDUINO_CORE_DIR}/Print.cpp
    ${ARDUINO_CORE_DIR}/Stream.cpp
    # ${ARDUINO_CORE_DIR}/wiring_analog.c
    ${ARDUINO_CORE_DIR}/wiring_digital.c
    ${ARDUINO_CORE_DIR}/wiring_pulse.cpp
    ${ARDUINO_CORE_DIR}/wiring_shift.c
    ${ARDUINO_CORE_DIR}/wiring_time.c
    ${ARDUINO_CORE_DIR}/WMath.cpp
    ${ARDUINO_CORE_DIR}/WString.cpp

    # ${ARDUINO_CORE_DIR}/sunxi/analog.c
    ${ARDUINO_CORE_DIR}/sunxi/clock.c
    # ${ARDUINO_CORE_DIR}/sunxi/interrupt.cpp
    ${ARDUINO_CORE_DIR}/sunxi/pinmap.c
    ${ARDUINO_CORE_DIR}/sunxi/sunxi_def.c
    ${ARDUINO_CORE_DIR}/sunxi/uart.c
)
include_directories(${ARDUINO_CORE_DIR} ${ARDUINO_CORE_DIR}/sunxi )

add_subdirectory(${ARDUINO_VARIANT_DIR}/V851/TinyVision)

add_compile_definitions(
    ARDUINO
    V851
    TINYVISION
    VARIANT_H=\"variant_TinyVision.h\"
)

add_library(arduino
    ${ARDUINO_CORE_SRC}
)

target_link_libraries(arduino PRIVATE variant_bin)