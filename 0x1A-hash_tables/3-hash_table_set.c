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
	hash_node_t *temp = NULL;

	if (!key || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	/*Initialize the node*/
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = malloc(sizeof(char) * strlen(key) + 1);
	node->value = malloc(sizeof(char) * strlen(value) + 1);
	strcpy(node->key, key);
	strcpy(node->value,value);
	node->next = NULL;

	/*Add node to hash table*/
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
	}
	/*If index is already occupied, handle collision by chaining*/
	else
	{
		temp = ht->array[index];
		node->next = temp;
		ht->array[index] = node;
	}
	return (1);
}
