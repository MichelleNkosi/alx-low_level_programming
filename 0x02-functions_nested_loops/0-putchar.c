#include "main.h"
#include <unistd.h>  // Include for the write function

/* Main function */
int main(void)
{
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');

    return (0);
}

/* _putchar function definition */
int _putchar(char c)
{
    return write(1, &c, 1); /* write to standard output */
}
