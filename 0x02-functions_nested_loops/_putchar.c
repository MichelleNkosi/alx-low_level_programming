#include "main.h"
#include <unistd.h>  /* Include for the write function */

/* _putchar function definition */
int _putchar(char c)
{
    return write(1, &c, 1); /* write to standard output */
}
