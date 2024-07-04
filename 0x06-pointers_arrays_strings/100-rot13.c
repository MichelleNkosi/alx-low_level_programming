#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: pointer to the string
 *
 * Return: the pointer to the resulting encoded string
 */
char *rot13(char *str)
{
int i = 0;
char c;

while (str[i])
{
c = str[i];
if ((c >= 'a' && c <= 'z'))
str[i] = ((c - 'a' + 13) % 26) + 'a';
else if ((c >= 'A' && c <= 'Z'))
str[i] = ((c - 'A' + 13) % 26) + 'A';
i++;
}
return (str);
}
