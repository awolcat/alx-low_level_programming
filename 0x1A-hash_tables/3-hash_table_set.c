#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_set - add node to the table
 * @ht: pointer to the hash table
 * @key: key of the element
 * @value: value part of key value pair
 *
 * Return: 0 Success!
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = NULL;
	hash_node_t *current = NULL;
	int update = 0;

	if (!key || strlen(key) == 0)
		return (0);
/*	if (!value)
		value = "";
*/	index = key_index((const unsigned char *)key, ht->size);
	/*Initialize the node*/
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = malloc(sizeof(char) * strlen(key) + 1);
	node->value = malloc(sizeof(char) * strlen(value) + 1);
	node->key = strdup(key);
	node->value = strdup(value);

	/* Check if the key exists*/
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{	/*overwrite old value*/
			strcpy(current->value, value);
			free(node);
			update = 1;
		}
		current = current->next;
	}
	if (update == 0)
	{
		node->next = ht->array[index];
		/*Add node to hash table*/
		ht->array[index] = node;
	}
	return (1);
}
