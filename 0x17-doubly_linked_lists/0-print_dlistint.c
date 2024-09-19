#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the doubly linked list
 *
 * Return: the number of nodes in the list
 */
void print_dlistint(const dlistint_t *h)
{
    const dlistint_t *current = h;
    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}
