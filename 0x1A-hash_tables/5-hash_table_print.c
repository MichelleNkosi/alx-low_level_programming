#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node;
int first = 1;

if (ht == NULL)
return;

printf("{");

/* Iterate over the array of the hash table */
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
/* Traverse the linked list at each index */
while (node != NULL)
{
if (!first)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
first = 0; /* After the first key/value pair, set first to 0 */
node = node->next;
}
}

printf("}\n");
}
