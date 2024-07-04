#include "main.h"

/**
 * rot13 - Encodes a string using the ROT13 cipher.
 * @str: The string to encode.
 *
 * Return: The encoded string.
 */
char *rot13(char *str)
{
char c;
int i;
i = 0;
while (str[i] != '\0')
{
c = str[i];
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
str[i] += 13;
else
str[i] -= 13;
}
i++;
}

return (str);
}
