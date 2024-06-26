#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number whose last digit is to be printed
 *
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;

last_digit = n % 10;
if (last_digit < 0)
last_digit = -last_digit; /* Make it positive if n is negative */

_putchar('0' + last_digit);  /* Print the last digit */
return (last_digit);
}
