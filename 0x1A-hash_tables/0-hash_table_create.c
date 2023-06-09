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
	unsigned long int index = 0;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * table->size);
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

