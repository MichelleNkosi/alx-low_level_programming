#include "main.h"
/**
 * print_array - prints n elements of an array of integers,
 * @a: pointer to the array
 * @n: number of elements to print
 * Return: void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (a[i] < 0)
{
_putchar('-');
a[i] = -a[i];
}
if (a[i] == 0)
{
_putchar('0');
}
else
{
int num = a[i];
int divisor = 1000000000;
while (divisor > num)
divisor /= 10;
while (divisor >= 1)
{_putchar((num / divisor) +'0');
num %= divisor;
divisor /= 10; }
}
if (i != n - 1)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
