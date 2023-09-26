/* 2-memcpy_rev.c */

/**
 * _memcpy_rev - Copies n bytes from memory area src to memory area dest in reverse order.
 * @dest: A pointer to the destination memory area.
 * @src: A pointer to the source memory area.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to dest.
 */
char *_memcpy_rev(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 1; i <= n; i++) /* Start from 1 to include null terminator */
    {
        dest[n - i] = src[n - i];
    }

    return (dest);
}