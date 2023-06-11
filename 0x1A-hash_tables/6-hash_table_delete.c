#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - delete a hash table
 * @ht: table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		if (temp)
		{
			if (temp->next)
				free_list(temp);
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);

}
/**
 * free_list - free linked list
 * @head: head
 *
 * Return: void
 */
void free_list(hash_node_t *head)
{
	hash_node_t *temp = NULL;

	temp = head->next;
	while (temp != 0)
	{
		head = temp;
		temp = temp->next;
		free(head->key);
		free(head->value);
		free(head);
	}
}
