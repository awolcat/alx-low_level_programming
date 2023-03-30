#include <stddef.h>
#include "lists.h"
#include <stdio.h>
/**
 * print_list - print contents of a signly linked list
 * @h: pointer to head of list
 *
 * Description: iterative
 * Return: number of structures/list elements
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
		printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}
	return (i);
}
