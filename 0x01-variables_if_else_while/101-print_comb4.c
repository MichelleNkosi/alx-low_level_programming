#include <stdio.h>

/**
 * main - prints all possible combinations of three different digits
 *        in ascending order, separated by ", "
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int hundreds, tens, units;

for (hundreds = '0'; hundreds <= '7'; hundreds++)
{
for (tens = hundreds + 1; tens <= '8'; tens++)
{
for (units = tens + 1; units <= '9'; units++)
{
putchar(hundreds);
putchar(tens);
putchar(units);

if (hundreds != '7' || tens != '8' || units != '9')
{
putchar(','); /* Print comma */
putchar(' '); /* Print space */
}
}
}
}

putchar('\n'); /* Print newline at the end */

return (0);
}
