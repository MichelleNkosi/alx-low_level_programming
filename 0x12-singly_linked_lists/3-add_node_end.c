#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *last_node = *head;
char *new_str;
unsigned int len = 0;

if (str == NULL)
return (NULL);

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_str = strdup(str);
if (new_str == NULL)
{
free(new_node);
return (NULL);
}

while (str[len])
len++;

new_node->str = new_str;
new_node->len = len;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
while (last_node->next != NULL)
last_node = last_node->next;
last_node->next = new_node;
}

return (new_node);
}
