#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - print contents of the table
 * @ht: the table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, printed = 0, count = 0;
	hash_node_t *temp = NULL;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			while (temp)
			{
				count++;
				temp = temp->next;
			}
		}

		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			while (temp)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				printed++;
				temp = temp->next;
				if (printed < count)
					printf(", ");
			}
		}
		printf("}\n");
	}
}
