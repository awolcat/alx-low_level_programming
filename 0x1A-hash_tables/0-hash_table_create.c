#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - create a hash table
 * @size: size of the table
 *
 * Return: pointer to the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	hash_node_t **arr = NULL;
	unsigned long int index = 0;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(table));
	if (!table)
		return (NULL);

	table->size = size;
	arr = malloc(sizeof(hash_node_t*) * table->size);
	table->array = arr;
	if (!table->array)
		return (NULL);

	/*Initialize hash table*/
	while (index < size)
	{
		table->array[index] = NULL;
		index++;
	}
	return (table);
}

