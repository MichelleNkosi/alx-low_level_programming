#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: The string to be encoded.
 *
 * Return: The encoded string.
 */
char *rot13(char *s)
{
char *p = s;
char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i;

while (*p)
{
for (i = 0; letters[i] != '\0'; i++)
{
if (*p == letters[i])
{
*p = rot13[i];
break;
}
}
p++;
}

return (s);
}
