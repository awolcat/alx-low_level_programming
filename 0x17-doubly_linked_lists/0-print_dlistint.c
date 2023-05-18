#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - print data in a doubly linked list
 * @h: head of the list
 *
 * Return: count
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count += 1;
	}

	return (count);
}
