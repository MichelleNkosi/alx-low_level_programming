#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and then in uppercase using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowercase = 'a';
char uppercase = 'A';

while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}

while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}

putchar('\n'); /* Print newline at the end */

return (0);
}
