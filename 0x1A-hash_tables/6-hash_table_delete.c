#include "hash_tables.h"
#include <stdlib.h>

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;
/*	hash_node_t *list = NULL;
	hash_node_t *next = NULL;
*/
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		if (temp != 0)
		{
			if (temp->next != 0)
				free_list(temp);
			free(temp->key);
			free(temp->value);
		}
		free(temp);
	}

	free(ht);

}

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

