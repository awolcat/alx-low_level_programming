#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_get - get the value associated with a key
 * @ht: the hash table
 * @key: key associated with the value
 *
 * Return: the value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node = NULL;
	hash_node_t *current = NULL;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	current = node;
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
