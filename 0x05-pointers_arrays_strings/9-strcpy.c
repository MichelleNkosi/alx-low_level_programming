#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';  /* Add the null terminator to the end of dest */

return (dest);
}
