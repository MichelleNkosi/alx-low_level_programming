#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table to add or update the key/value pair
 * @key: The key (cannot be an empty string)
 * @value: The value associated with the key (value can be an empty string)
 *
 * Return: 1 if the operation was successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node, *current_node;
char *dup_key, *dup_value;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);

/* Duplicate key and value */
dup_key = strdup(key);
dup_value = strdup(value);
if (dup_key == NULL || dup_value == NULL)
return (0);

/* Get the index for the key */
index = key_index((const unsigned char *)key, ht->size);

/* Check if key already exists, update its value */
current_node = ht->array[index];
while (current_node)
{
if (strcmp(current_node->key, key) == 0)
{
free(current_node->value);
current_node->value = dup_value;
free(dup_key); /* Key is already present, so we don't need the duplicate */
return (1);
}
current_node = current_node->next;
}

/* If key does not exist, create a new node */
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
free(dup_key);
free(dup_value);
return (0);
}

/* Initialize the new node */
new_node->key = dup_key;
new_node->value = dup_value;
new_node->next = ht->array[index]; /* Collision handling: insert at beginning */
ht->array[index] = new_node;

return (1);
}
