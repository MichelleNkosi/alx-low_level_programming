#include "main.h"
/**
 * print_array - prints n elements of an array of integers,
 * @a: pointer to the array
 * @n: number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
int i;
char buffer[12];  /* Buffer to hold string representation of numbers */
int j, k;
for (i = 0; i < n; i++)
{
k = 0;
if (a[i] < 0)
{
buffer[k++] = '-';
a[i] = -a[i];
}
if (a[i] == 0)
{
buffer[k++] = '0';
}
else
{
int num = a[i];
int divisor = 1000000000; /* Large divisor to get the most significant digit */
while (divisor > num)
divisor /= 10;
while (divisor >= 1)
{
buffer[k++] = (num / divisor) +'0';
num %= divisor;
divisor /= 10;
}
}
buffer[k] = '\0';
for (j = 0; buffer[j] != '\0'; j++)
{
_putchar(buffer[j]);
}
if (i != n - 1)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
