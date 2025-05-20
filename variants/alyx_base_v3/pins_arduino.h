#pragma once

#define PICO_RP2350A 0 // RP2530B

// LEDs
#define PIN_LED        (30u)

// Serial
#define PIN_SERIAL1_TX (44u)
#define PIN_SERIAL1_RX (45u)

#define PIN_SERIAL2_TX (?u)
#define PIN_SERIAL2_RX (?u)

// SPI
#define PIN_SPI0_MISO  (?u)
#define PIN_SPI0_MOSI  (?u)
#define PIN_SPI0_SCK   (?u)
#define PIN_SPI0_SS    (?u)

#define PIN_SPI1_MISO  (36u)
#define PIN_SPI1_MOSI  (35u)
#define PIN_SPI1_SCK   (34u)
#define PIN_SPI1_SS    (37u)

// Wire
#define PIN_WIRE0_SDA  (46u)
#define PIN_WIRE0_SCL  (47u)

#define PIN_WIRE1_SDA  (?u)
#define PIN_WIRE1_SCL  (?u)

#define SERIAL_HOWMANY (3u)
#define SPI_HOWMANY    (2u)
#define WIRE_HOWMANY   (2u)

// PSRAM
#define RP2350_PSRAM_CS         (0u)
#define RP2350_PSRAM_MAX_SCK_HZ (109*1000*1000)

#include "../generic/common.h"
