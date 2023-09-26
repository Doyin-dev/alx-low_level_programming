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
    char *start_dest = dest;
    char *start_src = src;

    dest += n - 1;
    src += n - 1;

    while (n--)
    {
        *dest-- = *src--;
    }

    return (start_dest);
}