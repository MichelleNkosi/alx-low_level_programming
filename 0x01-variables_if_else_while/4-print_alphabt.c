#include <stdio.h>

/**
 * main - prints the alphabet in lowercase excluding 'q' and 'e' using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
letter++;
}

putchar('\n'); /* Print newline at the end */

return (0);
}
