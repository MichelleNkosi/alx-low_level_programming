#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0'); /* Should print 1 (is alphabetic) */
    r = _isalpha('o');
    _putchar(r + '0'); /* Should print 1 (is alphabetic) */
    r = _isalpha(108);  /* ASCII value of 'l' */
    _putchar(r + '0'); /* Should print 1 (is alphabetic) */
    r = _isalpha(';');
    _putchar(r + '0'); /* Should print 0 (not alphabetic) */
    _putchar('\n');
    return (0);
}
