#include <stdio.h>

/**
 * main - prints all possible combinations of two digits in ascending order
 *        separated by ", "
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int tens, units;

for (tens = '0'; tens <= '8'; tens++)
{
for (units = tens + 1; units <= '9'; units++)
{
putchar(tens);
putchar(units);

if (tens != '8' || units != '9')
{
putchar(','); /* Print comma */
putchar(' '); /* Print space */
}
}
}

putchar('\n'); /* Print newline at the end */

return (0);
}
