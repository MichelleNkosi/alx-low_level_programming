#include <stdio.h>
#include <stdlib.h>  /* Include this header for free */
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    if (my_dog != NULL)
    {
        printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
        free(my_dog->name);  /* Free allocated memory */
        free(my_dog->owner); /* Free allocated memory */
        free(my_dog);        /* Free allocated memory for dog */
    }
    else
    {
        printf("Failed to create a new dog\n");
    }
    return (0);
}
