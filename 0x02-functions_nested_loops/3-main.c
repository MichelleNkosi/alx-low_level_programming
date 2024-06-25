#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0'); /* Should print 0 (not lowercase) */
    r = _islower('o');
    _putchar(r + '0'); /* Should print 1 (lowercase) */
    r = _islower(108);  /* ASCII value of 'l' */
    _putchar(r + '0'); /* Should print 1 (lowercase) */
    _putchar('\n');
    return (0);
}
