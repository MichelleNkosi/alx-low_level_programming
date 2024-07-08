#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to locate.
 *
 * Return: A pointer to the beginning of the located substring,
 *         NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
char *h, *n;

while (*haystack)
{
h = haystack;
n = needle;

while (*n && *h == *n)
{
h++;
n++;
}

if (!*n)
return (haystack);

haystack++;
}

return (NULL);
}
