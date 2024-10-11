#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node, *tmp;

if (ht == NULL)
return;

/* Loop through the hash table array */
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];

/* Free the linked list at each index */
while (node != NULL)
{
tmp = node->next;
free(node->key);   /* Free the key */
free(node->value); /* Free the value */
free(node);        /* Free the node itself */
node = tmp;
}
}

/* Free the array and the hash table structure */
free(ht->array);
free(ht);
}
