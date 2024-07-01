#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: pointer to the array
 * @n: number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
int i;
char buffer[12];  /* Buffer to hold string representation of numbers */
int j;

for (i = 0; i < n; i++)
{
_itoa(a[i], buffer);

        /* Print the number */
for (j = 0; buffer[j] != '\0'; j++)
{
_putchar(buffer[j]);
}

        /* Print comma and space if not the last element */
if (i != n - 1)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
