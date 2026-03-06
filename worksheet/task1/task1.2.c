// Worksheet 2.5

/* 
 * Task 1.2 - Practice
 * Write a program that allows a user to enter a series of positive numbers using a while loop. 
 * The loop should only stop when the user enters a -1.
 * The program then calculates and prints the average of these numbers. 
 */

#include <stdio.h>

int main(void) {
	int value;
	int count = 0;
	int sum = 0;

	printf("--- Average Calculator ---\n");
	printf("Enter positive numbers (-1 to stop):\n");

	while (1) {
		printf("Number: ");
		if (scanf("%d", &value) != 1) {
			printf("Invalid input.\n");
			return 1;
		}

		if (value == -1) {
			break;
		}

		if (value > 0) {
			sum += value;
			count++;
		} else {
			printf("Please enter a positive number or -1 to stop.\n");
		}
	}

	if (count == 0) {
		printf("No positive numbers were entered.\n");
	} else {
		printf("Average: %.2f\n", (double)sum / count);
	}

	return 0;
}