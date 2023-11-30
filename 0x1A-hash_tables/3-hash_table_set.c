#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key.
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_node, *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = str_dup(value);
			if (current->value == NULL)
			{
				return (0);
			}
			return (1);
		}
		current = current->next;
	}
	hash_node = malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
	{
		return (0);
	}
	hash_node->key = str_dup(key);
	hash_node->value = str_dup(value);
	if (hash_node->key == NULL || hash_node->value == NULL)
	{
		free(hash_node->key);
		free(hash_node->value);
		free(hash_node);
		return (0);
	}
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;

	return (1);
}
