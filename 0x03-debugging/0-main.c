#include "main.h"

/**
 * main - tests the positive_or_negative function
 * Return: Always 0
 */
int main(void)
{
    int i;

    i = 5;  // Should print "5 is positive"
    positive_or_negative(i);

    i = -2;  // Should print "-2 is negative"
    positive_or_negative(i);

    i = 0;  // Should print "0 is zero"
    positive_or_negative(i);

    return (0);
}