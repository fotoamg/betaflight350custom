/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "IMF3"


// Removed to make the firmware fit into flash (in descending order of priority):
//#undef USE_GYRO_OVERFLOW_CHECK
//#undef USE_GYRO_LPF2

//#undef USE_ITERM_RELAX
//#undef USE_RC_SMOOTHING_FILTER

//#undef USE_TELEMETRY_HOTT
//#undef USE_TELEMETRY_MAVLINK
//#undef USE_TELEMETRY_LTM
//#undef USE_SERIALRX_XBUS

#undef USE_BOARD_INFO
#undef USE_EXTENDED_CMS_MENUS
#undef USE_RTC_TIME
#undef USE_RX_MSP
#undef USE_ESC_SENSOR_INFO

#define USE_PWM
#define USE_GPS
#define USE_GPS_NMEA
#define USE_GPS_UBLOX
#define USE_GPS_RESCUE

#define ENABLE_DSHOT_DMAR       true

#define LED0_PIN                PB7

#define USE_BEEPER
#define BEEPER_PIN              PC15

#define USE_EXTI
#define MPU_INT_EXTI            PC13
#define USE_MPU_DATA_READY_SIGNAL
#define ENSURE_MPU_DATA_READY_IS_LOW

#define USE_GYRO
#define USE_GYRO_SPI_MPU6000
#define GYRO_MPU6000_ALIGN      CW0_DEG

#define USE_ACC
#define USE_ACC_SPI_MPU6000
#define ACC_MPU6000_ALIGN       CW0_DEG

#undef USE_FLASHFS
#undef USE_FLASH_M25P16

#define USE_VCP
#define USE_UART1
#define USE_UART2
#define USE_UART3
#undef USE_SOFTSERIAL1
#undef USE_SOFTSERIAL2

#define SERIAL_PORT_COUNT 4

#undef USE_ESCSERIAL
#undef ESCSERIAL_TIMER_TX_PIN // (HARDARE=0,PPM)

#define UART1_TX_PIN            PA9
#define UART1_RX_PIN            PA10

#define UART2_TX_PIN            PA14
#define UART2_RX_PIN            PA15

#define UART3_TX_PIN            PB10
#define UART3_RX_PIN            PB11

#define USE_SPI
#define USE_SPI_DEVICE_1 // PA4, 5, 6, 7
#define USE_SPI_DEVICE_2 // PB12,13,14,15 on AF5

//#define FLASH_CS_PIN            PB12
//#define FLASH_SPI_INSTANCE      SPI2

#define MPU6000_CS_PIN          PA4
#define MPU6000_SPI_INSTANCE    SPI1

#define USE_MAX7456
#define MAX7456_SPI_INSTANCE    SPI1
#define MAX7456_SPI_CS_PIN      PA3
#define MAX7456_NRST_PIN        PC14
#define MAX7456_SPI_CLK         (SPI_CLOCK_STANDARD*2)
#define MAX7456_RESTORE_CLK     (SPI_CLOCK_FAST)

#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define USE_ADC
#define ADC_INSTANCE            ADC1
#define CURRENT_METER_ADC_PIN   PA0
#define RSSI_ADC_PIN            PA1
#define VBAT_ADC_PIN            PA2

#define CURRENT_METER_SCALE_DEFAULT 275

//#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT

#define DEFAULT_RX_FEATURE      FEATURE_RX_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_SBUS
#define SERIALRX_UART           SERIAL_PORT_USART2

#undef USE_SERIAL_4WAY_BLHELI_INTERFACE

// IO - stm32f303cc in 48pin package
#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         (BIT(13)|BIT(14)|BIT(15))
#define TARGET_IO_PORTF         (BIT(0)|BIT(1)|BIT(4))

#define USABLE_TIMER_CHANNEL_COUNT 8
#define USED_TIMERS             (TIM_N(1) | TIM_N(2) | TIM_N(3) | TIM_N(4) | TIM_N(8))

#undef USE_LED_STRIP
#undef USE_RANGEFINDER
#undef USE_BARO
#undef USE_MAG
//#undef USE_VTX_COMMON
//#undef USE_VTX_CONTROL
//#undef USE_VTX_SMARTAUDIO
//#undef USE_VTX_TRAMP


