/*
 *******************************************************************************
 * Copyright (c) 2021 Nanjing Qinheng Microelectronics Co., Ltd.
 * All rights reserved.
 *
 * This software component is licensed by WCH under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
#pragma once

/* ENABLE Peripherals */
// #define                         ADC_MODULE_ENABLED
#define                         UART_MODULE_ENABLED
#define                         SPI_MODULE_ENABLED  
#define                         I2C_MODULE_ENABLED

/* V851 Pins */
#define PA0                     0
#define PA1                     1
#define PA2                     2
#define PA3                     3
#define PA4                     4
#define PA5                     5
#define PA6                     6
#define PA7                     7
#define PA8                     8
#define PA9                     9
#define PA10                    10
#define PA11                    11

#define PC0                     12
#define PC1                     13
#define PC2                     14
#define PC3                     15
#define PC4                     16
#define PC5                     17

#define PD1                     18
#define PD2                     19
#define PD3                     20
#define PD4                     21
#define PD5                     22
#define PD6                     23
#define PD7                     24
#define PD8                     25
#define PD18                    26
#define PD19                    27
#define PD20                    28
#define PD21                    29

#define PE0                     30
#define PE1                     31
#define PE2                     32
#define PE3                     33
#define PE4                     34
#define PE5                     35
#define PE6                     36
#define PE7                     37
#define PE8                     38
#define PE9                     39
#define PE10                    40
#define PE11                    41
#define PE12                    42
#define PE13                    43

#define PF0                     44
#define PF1                     45
#define PF2                     46
#define PF3                     47
#define PF4                     48
#define PF5                     49
#define PF6                     50

#define PH0                     51
#define PH9                     52
#define PH10                    53
#define PH11                    54
#define PH12                    55
#define PH13                    56
#define PH14                    57

#define NUM_DIGITAL_PINS        58
#define NUM_ANALOG_INPUTS       1
// #define ADC_CTLR_ADCAL          
#define ADC_RESOLUTION          12


// On-board LED pin number
#ifndef LED_BUILTIN
  #define LED_BUILTIN           PNUM_NOT_DEFINED
#endif



// On-board user button
#ifndef USER_BTN
  #define USER_BTN              PNUM_NOT_DEFINED
#endif

// SPI definitions
#ifndef PIN_SPI_SS
  #define PIN_SPI_SS            PA4
#endif
#ifndef PIN_SPI_SS1
  #define PIN_SPI_SS1           PA15
#endif
#ifndef PIN_SPI_SS2
  #define PIN_SPI_SS2           PNUM_NOT_DEFINED
#endif
#ifndef PIN_SPI_SS3
  #define PIN_SPI_SS3           PNUM_NOT_DEFINED
#endif

#ifndef PIN_SPI_MOSI
  #define PIN_SPI_MOSI          PA7
#endif
#ifndef PIN_SPI_MISO
  #define PIN_SPI_MISO          PA6
#endif
#ifndef PIN_SPI_SCK
  #define PIN_SPI_SCK           PA5
#endif

// I2C definitions
#ifndef PIN_WIRE_SDA
  #define PIN_WIRE_SDA          PB7
#endif
#ifndef PIN_WIRE_SCL
  #define PIN_WIRE_SCL          PB6
#endif


// UART Definitions

#define UART0_BASE            0x02500000
#define UART1_BASE            0x02500400
#define UART2_BASE            0x02500800
#define UART3_BASE            0x02500C00

#ifndef SERIAL_UART_INSTANCE
  #define SERIAL_UART_INSTANCE  0
#endif
// Default pin used for generic 'Serial' instance
// Mandatory for Firmata
#ifndef PIN_SERIAL_RX
  #define PIN_SERIAL_RX         PH10
#endif
#ifndef PIN_SERIAL_TX
  #define PIN_SERIAL_TX         PH9
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
  // These serial port names are intended to allow libraries and architecture-neutral
  // sketches to automatically default to the correct port name for a particular type
  // of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
  // the first hardware serial port whose RX/TX pins are not dedicated to another use.
  //
  // SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
  //
  // SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
  //
  // SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
  //
  // SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
  //
  // SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
  //                            pins are NOT connected to anything by default.
  #ifndef SERIAL_PORT_MONITOR
    #define SERIAL_PORT_MONITOR   Serial
  #endif
  #ifndef SERIAL_PORT_HARDWARE
    #define SERIAL_PORT_HARDWARE  Serial
  #endif
#endif


