#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * list_len - find number of elements in list list_h
 * @h: head of list list_h
 *
 * Description: return number of elements in list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
