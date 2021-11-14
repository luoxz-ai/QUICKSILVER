#include "config.h"
#include "config_helper.h"

#define FF_Racepit

//PORTS
#define SPI_PORTS   \
  SPI1_PA5PA6PA7    \
  SPI2_PB13PB14PB15 \
  SPI3_PB3PB4PB5

#define USART_PORTS \
  USART1_PB7PA9     \
  USART2_PA3PA2     \
  USART3_PC11PC10   \
  USART4_PA1PA0     \
  USART6_PC7PC6

//LEDS
#define LED_NUMBER 2
#define LED1PIN PIN_B8
#define LED1_INVERT
#define LED2PIN PIN_B9
//#define LED2_INVERT
#define BUZZER_PIN PIN_C3
#define BUZZER_INVERT
#define FPV_PIN PIN_C0

//GYRO
#define GYRO_TYPE MPU6XXX
#define GYRO_SPI_PORT SPI_PORT1
#define GYRO_NSS PIN_A4
#define GYRO_INT PIN_C4
#define GYRO_ID_1 0x68
#define GYRO_ID_2 0x73
#define GYRO_ID_3 0x78
#define GYRO_ID_4 0x71
#define SENSOR_FLIP_180

//RADIO
#define USART3_INVERTER_PIN PIN_C15

#ifdef SERIAL_RX
#define SOFTSPI_NONE
#define RX_USART USART_PORT1
#endif
#ifndef SOFTSPI_NONE
#define RADIO_CHECK
#define SPI_MISO_PIN LL_GPIO_PIN_1
#define SPI_MISO_PORT GPIOA
#define SPI_MOSI_PIN LL_GPIO_PIN_4
#define SPI_MOSI_PORT GPIOB
#define SPI_CLK_PIN LL_GPIO_PIN_10
#define SPI_CLK_PORT GPIOA
#define SPI_SS_PIN LL_GPIO_PIN_6
#define SPI_SS_PORT GPIOB
#endif

//OSD
#define ENABLE_OSD
#define MAX7456_SPI_PORT SPI_PORT2
#define MAX7456_NSS PIN_B12

//VOLTAGE DIVIDER
#define BATTERYPIN PIN_C2
#define BATTERY_ADC_CHANNEL LL_ADC_CHANNEL_12
#ifndef VOLTAGE_DIVIDER_R1
#define VOLTAGE_DIVIDER_R1 10000
#endif
#ifndef VOLTAGE_DIVIDER_R2
#define VOLTAGE_DIVIDER_R2 1000
#endif
#ifndef ADC_REF_VOLTAGE
#define ADC_REF_VOLTAGE 3.3
#endif

// MOTOR PINS
#define MOTOR_PIN0 MOTOR_PIN_PB11
#define MOTOR_PIN1 MOTOR_PIN_PB10
#define MOTOR_PIN2 MOTOR_PIN_PB0
#define MOTOR_PIN3 MOTOR_PIN_PB1
