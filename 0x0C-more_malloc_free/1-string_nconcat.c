#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes of s2 to concatenate.
 *
 * Return: A pointer to the newly allocated space in memory
 * containing s1 followed by the first n bytes of s2, and null terminated.
 *  If the function fails, return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int i, j, len1 = 0, len2 = 0;
if (s1 != NULL)
{
while (s1[len1] != '\0')
len1++;
}
if (s2 != NULL)
{
while (s2[len2] != '\0')
len2++;
}
if (n >= len2)
n = len2;
concat = malloc(len1 + n + 1);
if (concat == NULL)
return (NULL);
for (i = 0; i < len1; i++)
concat[i] = s1[i];
for (j = 0; j < n; j++, i++)
concat[i] = s2[j];
concat[i] = '\0';
return (concat);
}
