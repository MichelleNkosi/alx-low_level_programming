#include "main.h"

/**
 * _strncpy - copies a string up to n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

/* If we reached the end of src before n bytes, fill the rest with '\0' */
for (; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}
