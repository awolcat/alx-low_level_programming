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

	if (!key || strlen(key) == 0)
		return (0);
	if (!value || strlen(value) == 0)
		value = "";
	index = key_index((const unsigned char *)key, ht->size);
	/*Initialize the node*/
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = malloc(sizeof(char) * strlen(key) + 1);
	node->value = malloc(sizeof(char) * strlen(value) + 1);
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;
	/*Add node to hash table*/
	if (ht->array[index] == 0)
	{
		ht->array[index] = node;
	}
	else
        {
                node->next = ht->array[index];
                ht->array[index] = node;
        }
	/*printf("index: %ld key: %s value: %s\n", index, ht->array[index]->key, ht->array[index]->value);
	printf("---------------------------------\n");
	temp = ht->array[index];
	while (temp)
	{
		printf("index: %ld key: %s value: %s\n", index, temp->key, temp->value);
		temp = temp->next;
	}*/
	/*If index is already occupied, handle collision by chaining
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	printf("+++++++++++++++++++++++++++++++++++\n");*/
	return (1);
}
