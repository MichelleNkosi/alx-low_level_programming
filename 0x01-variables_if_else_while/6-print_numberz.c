#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit = 0;

while (digit <= 9)
{
putchar(digit % 10 + '0');
digit++;
}

putchar('\n'); /* Print newline at the end */

return (0);
}
