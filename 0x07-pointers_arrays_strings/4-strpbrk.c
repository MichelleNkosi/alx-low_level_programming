#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search.
 * @accept: The set of bytes to look for.
 *
 * Return: A pointer to the byte in s that matches the bytes
 *         in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
char *a;

while (*s)
{
a = accept;
while (*a)
{
if (*s == *a)
return (s);
a++;
}
s++;
}
return (NULL);
}
