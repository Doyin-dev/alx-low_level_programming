#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints the last digit of a number n.
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n, lastDigit;

    n = -98; // Change the number to -98
    lastDigit = n % 10;
    if (lastDigit < 0)
    {
        lastDigit = -lastDigit; // Make lastDigit positive if it's initially negative
    }

    printf("Last digit of %d is ", n);

    if (lastDigit > 5)
    {
        printf("%d and is greater than 5\n", lastDigit);
    }
    else if (lastDigit == 0)
    {
        printf("%d and is 0\n", lastDigit);
    }
    else
    {
        printf("-%d and is less than 6 and not 0\n", lastDigit);
    }

    return (0);
}