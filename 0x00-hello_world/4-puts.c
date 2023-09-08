
#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char message[] = "\"Programming is like building a multilingual puzzle";
    fprintf(stdout, "%s\n\n(52 chars long)\n", message);
    
    /* Using puts to print the message */
    puts("Programming is like building a multilingual puzzle");

    return (0);
}