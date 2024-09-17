#ifndef __I2C_LCD_H
#define __I2C_LCD_H

#include "stm32f1xx_hal.h"

// Define the I2C address of the LCD (typically 0x27 or 0x3F)
#define LCD_ADDRESS (0x27 << 1)

void lcd_init(I2C_HandleTypeDef *hi2c);
void lcd_send_cmd(char cmd);
void lcd_send_data(char data);
void lcd_send_string(char *str);
void lcd_clear(void);

#endif
