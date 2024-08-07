#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a specific index
 * of a listint_t linked list.
 * @head: Pointer to the pointer of the head of the list.
 * @index: Index of the node to be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head, *node_to_delete;
unsigned int i;
if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}
for (i = 0; temp != NULL && i < index - 1; i++)
{
temp = temp->next;
}
if (temp == NULL || temp->next == NULL)
return (-1);
node_to_delete = temp->next;
temp->next = temp->next->next;
free(node_to_delete);
return (1);
}
