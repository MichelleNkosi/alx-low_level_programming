#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'z';

while (letter >= 'a')
{
putchar(letter);
letter--;
}

putchar('\n'); /* Print newline at the end */

return (0);
}
