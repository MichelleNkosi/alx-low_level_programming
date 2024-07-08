#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to the pointer to a char.
 * @to: The new string to set.
 *
 * Return: Nothing.
 */
void set_string(char **s, char *to)
{
*s = malloc(strlen(to) + 1);
if (*s == NULL)
{
return;
}
strcpy(*s, to);
}
