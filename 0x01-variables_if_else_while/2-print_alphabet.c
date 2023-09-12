#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter = 'a'; // Initialize a variable to store the letter
    
    while (letter <= 'z') // Loop through the lowercase alphabet
    {
        putchar(letter); // Print the current letter using putchar
        letter++; // Move to the next letter
    }
    
    putchar('\n'); // Print a newline character to start a new line
    
    return (0); // Return 0 to indicate success
}
