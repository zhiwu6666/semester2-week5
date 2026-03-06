// Worksheet 2.5

/* 
 * Task 3 - extension task
 * Implement a C program that demonstrates an input validation loop with the following requirements:
 * 1. Prompt the person to enter a password that must:
 *    a. Be at least 8 characters long
 *    b. Contain at least one uppercase letter
 *    c. Contain at least one number
 *    d. Contain at least one special character (!@#$%^&*)
 * 2.	Use an appropriate loop structure to continue prompting until a valid password is entered
 * 3.	After a successful password entry, ask if they want to validate another password (y/n)
 * 4.	Use an appropriate outer loop to continue the program until the person chooses to exit
 * This task requires combining nested loops with string processing and character checking.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
 int main(void){
	 char password[256];
	 char choice = 'y';

	 while (choice == 'y' || choice == 'Y') {
		 int valid = 0;

		 while (!valid) {
			 int has_upper = 0;
			 int has_digit = 0;
			 int has_special = 0;
			 size_t len;

			 printf("Enter password: ");
			 if (fgets(password, sizeof(password), stdin) == NULL) {
				 return 1;
			 }

			 password[strcspn(password, "\n")] = '\0';
			 len = strlen(password);

			 for (size_t i = 0; i < len; i++) {
				 if (isupper((unsigned char)password[i])) {
					 has_upper = 1;
				 }
				 if (isdigit((unsigned char)password[i])) {
					 has_digit = 1;
				 }
				 if (strchr("!@#$%^&*", password[i]) != NULL) {
					 has_special = 1;
				 }
			 }

			 if (len >= 8 && has_upper && has_digit && has_special) {
				 valid = 1;
				 printf("Password is valid.\n");
			 } else {
				 printf("Invalid password. Requirements:\n");
				 printf("- At least 8 characters\n");
				 printf("- At least one uppercase letter\n");
				 printf("- At least one number\n");
				 printf("- At least one special character (!@#$%%^&*)\n");
			 }
		 }

		 printf("Validate another password? (y/n): ");
		 if (scanf(" %c", &choice) != 1) {
			 return 1;
		 }
		 while (getchar() != '\n') {
		 }
	 }

	 printf("Program ended.\n");
	 return 0;
 }