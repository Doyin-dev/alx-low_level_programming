#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to search.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
    int i = 0;

    while (s[i] != '\0') // Use a while loop to iterate through the string.
    {
        if (s[i] == c)
            return (&s[i]);
        i++; // Increment i to move to the next character in the string.
    }

    return (NULL); // Return NULL if the character is not found.
}