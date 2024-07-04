#include "main.h"

/**
 * _strncat - concatenates two strings up to n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be used from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int i;

/* Find the length of the destination string */
while (dest[dest_len] != '\0')
{
dest_len++;
}

/* Append up to n bytes from the source string to the destination string */
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}

/* Add the terminating null byte */
dest[dest_len + i] = '\0';

return (dest);
}
