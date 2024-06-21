#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;

for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);

if (digit != '9')
{
putchar(','); /* Print comma */
putchar(' '); /* Print space */
}
}

putchar('\n'); /* Print newline at the end */

return (0);
}
