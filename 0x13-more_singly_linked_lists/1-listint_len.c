#include <stddef.h>
#include "lists.h"
/**
 * listint_len - find length of list
 * @h: pointer to head of list
 *
 * Description: iterate through list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
