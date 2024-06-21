#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char digit;

    /* Print digits '0' to '9' */
for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}

    /* Print characters 'a' to 'f' */
for (digit = 'a'; digit <= 'f'; digit++)
{
putchar(digit);
}

putchar('\n'); /* Print newline at the end */

return (0);
}
