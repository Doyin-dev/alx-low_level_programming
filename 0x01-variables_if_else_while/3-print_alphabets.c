#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a'; /* Initialize a variable for lowercase letters */
	char uppercase = 'A'; /* Initialize a variable for uppercase letters */

	while (lowercase <= 'z') /* Loop through the lowercase alphabet */
	{
		putchar(lowercase); /* Print the current lowercase letter */
		lowercase++; /* Move to the next lowercase letter */
	}

	while (uppercase <= 'Z') /* Loop through the uppercase alphabet */
	{
		putchar(uppercase); /* Print the current uppercase letter */
		uppercase++; /* Move to the next uppercase letter */
	}

	putchar('\n'); /* Print a newline character to start a new line */

	return (0); /* Return 0 to indicate success */
}