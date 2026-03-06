// Worksheet 2.5

/* 
 * Task 1.1 - Practice
 * Using for loop to print all prime numbers from 1 to 100.
 * recall that a prime number is a natural number greater than 1
 * and completely only divisible by 1 and itself.
 */

#include <stdio.h>

int main(void) {
	for (int n = 2; n <= 100; n++) {
		int is_prime = 1;

		for (int d = 2; d * d <= n; d++) {
			if (n % d == 0) {
				is_prime = 0;
				break;
			}
		}

		if (is_prime) {
			printf("%d\n", n);
		}
	}

	return 0;
}