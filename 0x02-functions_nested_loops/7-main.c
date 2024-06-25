#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int r;

    print_last_digit(98);    /* Should print 8 */
    print_last_digit(0);     /* Should print 0 */
    r = print_last_digit(-1024);
    _putchar('0' + r);       /* Should print 4 */
    _putchar('\n');
    return (0);
}
