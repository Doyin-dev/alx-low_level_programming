#include <stdio.h>

int main(void)
{
    char message[] = "\"Programming is like building a multilingual puzzle";
    
    /* Print the message without using puts */
    fprintf(stdout, "%s\n\n(52 chars long)\n", message);
    
    /* Print the message using puts */
    puts("Programming is like building a multilingual puzzle");

    return 0;
}

