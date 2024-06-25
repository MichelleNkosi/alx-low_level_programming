#include <stdio.h>

/**
 * _putchar - Prints a character to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return putchar(c);
}

/**
 * main - Entry point of the program
 *
 * Description: Prints "_putchar" followed by a newline.
 * Return: Always 0 (success)
 */
int main(void)
{
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');

    return (0);
}