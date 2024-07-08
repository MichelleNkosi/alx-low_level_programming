#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area.
 * @s: Pointer to the memory area.
 * @b: Constant byte to fill.
 * @n: Number of bytes to be filled.
 *
 * Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
