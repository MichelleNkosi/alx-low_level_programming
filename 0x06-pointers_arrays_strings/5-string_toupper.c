#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer to the string
 *
 * Return: the pointer to the resulting string
 */
char *string_toupper(char *str)
{
char *p = str;

while (*p)
{
if (*p >= 'a' && *p <= 'z')
{
*p -= 32;
}
p++;
}

return (str);
}
