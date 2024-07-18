#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes of the new memory block.
 *
 * Return: A pointer to the newly allocated memory block.
 *  If new_size == old_size, returns ptr.
 *  If new_size == 0 and ptr is not NULL, returns NULL and frees ptr.
 *  If malloc fails, returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int min_size;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
return (malloc(new_size));

if (new_size == 0)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

min_size = (old_size < new_size) ? old_size : new_size;
memcpy(new_ptr, ptr, min_size);
free(ptr);

return (new_ptr);
}
