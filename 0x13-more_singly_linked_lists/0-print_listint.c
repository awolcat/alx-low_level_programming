#include <stddef.h>
#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print data in nodes of singly linked list
 * @h: pointer to head of linked list
 *
 * Description: Print data in list
 * Return: size_t number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
