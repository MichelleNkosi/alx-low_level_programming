#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The characters to match.
 *
 * Return: The number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
char *a;

while (*s)
{
a = accept;
while (*a)
{
if (*s == *a)
break;
a++;
}
if (*a == '\0')
break;
count++;
s++;
}
return (count);
}
