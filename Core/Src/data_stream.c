/*
 * data_stream.c
 *
 *  Created on: Jul 12, 2020
 *      Author: rjonesj
 */

#include <stdint.h>

uint8_t data_stream[] = "Hello! This is a message to be sent over USART2!\n";

uint32_t data_len = sizeof(data_stream);
