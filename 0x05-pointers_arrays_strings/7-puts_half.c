#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line.
 * @str: pointer to the string
 *
 * Return: void
 */
void puts_half(char *str)
{
int length = 0, i, n;

    /* Find the length of the string */
while (str[length] != '\0')
{
length++;
}

    /* Calculate the starting point */
if (length % 2 == 0)
{
n = length / 2;
}
else
{
n = (length - 1) / 2 + 1;
}

    /* Print the second half of the string */
for (i = n; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
