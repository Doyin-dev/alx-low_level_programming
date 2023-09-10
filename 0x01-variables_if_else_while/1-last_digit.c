#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints the last digit of a number n.
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n, lastDigit;

    n = 98;
    lastDigit = n % 10;

    if (lastDigit > 5)
    {
        printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
    }
    else if (lastDigit == 0)
    {
        printf("Last digit of %d is %d and is 0\n", n, lastDigit);
    }
    else
    {
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
    }

    return (0);
}