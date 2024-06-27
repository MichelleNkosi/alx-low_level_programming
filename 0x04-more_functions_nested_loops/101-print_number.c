#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Description: Prints an integer using only _putchar function
 */
void print_number(int n)
{
/* Variable declarations */
int reversed = 0;
int digit;

/* Handling negative numbers */
if (n < 0) {
_putchar('-');
n = -n;
}
/* Reverse the number */
while (n != 0) {
digit = n % 10;
reversed = reversed * 10 + digit;
n /= 10;
}
/* Print the reversed number */
while (reversed != 0) {
digit = reversed % 10;
_putchar(digit + '0');
reversed /= 10;
}
/* Edge case for printing 0 */
if (n == 0)
_putchar('0');
}
