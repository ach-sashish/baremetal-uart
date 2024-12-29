
#include <stdint.h>
#include "uart.h"

#define GPIODEN     (1U<<3)
#define UART2EN     (1U<<18)

#define CR1_UE	(1U<<0)
#define CR1_TE  (1U<<3)
#define CR1_RE  (1U<<2)

#define SYS_FREQ	16000000
#define PERIPH_CLK	SYS_FREQ
#define UART_BAUDRATE 9600
#define ISR_TXE		(1U<<7)

