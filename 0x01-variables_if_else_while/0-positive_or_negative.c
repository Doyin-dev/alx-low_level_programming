
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: This program assigns a random number to variable n
 *              and prints whether it's positive, zero, or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0)); /* Seed for random number generation */
    n = rand() - RAND_MAX / 2;

    printf("%d is %s\n", n, n ? (n > 0 ? "positive" : "negative") : "zero");

    return (0);
}