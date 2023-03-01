#include <reg52.h>
#define uint unsigned int

sbit led1 = P1^0;

void delay_ms(uint xms);

void main() {
	while (1) {
		led1 = 0;
		delay_ms(200);
		led1 = 1;
		delay_ms(800);
		
	}
}

void delay_ms(uint xms) {
	uint i, j;
	for (i = xms; i > 0; i--) {
		for (j = 110; j > 0; j--) {
		}
	}
}

