/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name:
 * ID: 
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal = 0;
	char hex[9];

	printf("Enter a hexadecimal:");
	if (scanf("%8s", hex) != 1) {
		printf("Error: Invalid Hexadecimal\n");
		return 1;
	}

	for (int i = 0; hex[i] != '\0'; i++) {
		int value;
		char c = hex[i];

		if (c >= '0' && c <= '9') {
			value = c - '0';
		} else if (c >= 'A' && c <= 'F') {
			value = c - 'A' + 10;
		} else if (c >= 'a' && c <= 'f') {
			value = c - 'a' + 10;
		} else {
			printf("Error: Invalid Hexadecimal\n");
			return 1;
		}

		decimal = decimal * 16 + value;
	}

	printf("decimal:%ld\n", decimal);

	return 0;
}