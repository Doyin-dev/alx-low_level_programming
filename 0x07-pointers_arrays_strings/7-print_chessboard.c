#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints a chessboard.
 * @a: The 2D array representing the chessboard.
 *
 * Description: This function prints a chessboard represented by a 2D array.
 */
void print_chessboard(char (*a)[8])
{
    int row, col;

    for (row = 0; row < 8; row++)
    {
        for (col = 0; col < 8; col++)
        {
            _putchar(a[row][col]); // Print each character
        }
        _putchar('\n'); // Print a newline after each row
    }
}