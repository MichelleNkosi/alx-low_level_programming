#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 * @name: the name to be printed
 * @f: a pointer to the function that will print the name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
