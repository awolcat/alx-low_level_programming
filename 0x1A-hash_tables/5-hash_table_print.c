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

	printf("{");
	if (ht)
	{
		while (i < ht->size)
		{
			if (ht->array[i] != 0)
				count++;
			i++;
		}
		i = 0;
		while (i < ht->size)
		{
			if (ht->array[i] != 0)
			{
				temp = ht->array[i];
				printf("'%s': '%s'", temp->key, temp->value);
				printed++;
				if (printed < count - 1)
					printf(",");
			}
			i++;
		}
	}

	printf("}\n");
}
