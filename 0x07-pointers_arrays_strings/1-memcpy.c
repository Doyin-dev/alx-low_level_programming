#include <stdio.h>

char *_memcpy(char *dest, char *src, unsigned int n) {
    char *original_dest = dest;  // Save the original destination pointer

    while (n--) {
        *dest++ = *src++;  // Copy byte by byte
    }

    return original_dest;  // Return a pointer to the start of the destination
}

int main() {
    char source[] = "Hello, World!";
    char destination[20];

    _memcpy(destination, source, 13);  // Copy 13 bytes from source to destination
    destination[13] = '\0';  // Null-terminate the destination string

    printf("Copied String: %s\n", destination);

    return 0;
}
