#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: pointer to the head of the list
 * @index: index of the node to retrieve, starting from 0
 *
 * Return: pointer to the nth node, or NULL if the node doesnt exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

while (head != NULL)
{
if (i == index)
return (head);
head = head->next;
i++;
}

return (NULL);
}
