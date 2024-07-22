#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog
 * @d: pointer to the dog to be freed
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);  /* Free allocated memory for name */
free(d->owner); /* Free allocated memory for owner */
free(d);        /* Free allocated memory for the dog structure itself */
}
}
