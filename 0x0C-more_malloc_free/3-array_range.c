#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers.
 * @min: The minimum integer value (included).
 * @max: The maximum integer value (included).
 *
 * Return: A pointer to the newly created array.
 * If min > max or if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
int *array;
int i, size;

if (min > max)
return (NULL);

size = max - min + 1;
array = malloc(size *sizeof(int));
if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = min + i;

return (array);
}
