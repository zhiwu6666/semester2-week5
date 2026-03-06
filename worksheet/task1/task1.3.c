// Worksheet 2.5

/* 
 * Task 1.3 - Practice
 * Write a program that generate two random numbers between 1 and 6 with a constraint
 * that the sum of these two numbers cannot be 7. If the sum is 7,
 * regenerate two new random numbers. Use a do..while loop for this task.
 * The loop should terminate when a sum other than 7 is achieved and print the
 * two numbers. You should use srand() and rand().
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int a;
	int b;

	srand(time(NULL)); // Seed the random generator
	printf("Generate two numbers between 1-6 with total cannot be 7\n");

	do {
		a = rand() % 6 + 1;
		b = rand() % 6 + 1;
	} while (a + b == 7);

	printf("Number 1: %d\n", a);
	printf("Number 2: %d\n", b);
	printf("Sum: %d\n", a + b);

	return 0;
}