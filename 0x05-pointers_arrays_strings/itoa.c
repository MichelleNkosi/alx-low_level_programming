#include "main.h"

/**
 * _itoa - converts an integer to a string
 * @n: the integer to convert
 * @str: the buffer to store the converted string
 */
void _itoa(int n, char *str)
{
    int i = 0, j, temp;
    int is_negative = 0;

    /* Handle 0 explicitly */
    if (n == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
        return;
    }

    /* Handle negative numbers */
    if (n < 0)
    {
        is_negative = 1;
        n = -n;
    }

    /* Process individual digits */
    while (n != 0)
    {
        str[i++] = (n % 10) + '0';
        n /= 10;
    }

    /* Add negative sign */
    if (is_negative)
    {
        str[i++] = '-';
    }

    str[i] = '\0';

    /* Reverse the string */
    for (j = 0, i--; j < i; j++, i--)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
    }
}
