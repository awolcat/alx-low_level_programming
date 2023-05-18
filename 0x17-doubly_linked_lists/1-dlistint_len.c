#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - find the legth of a doubly linked list
 * @h: head of the list
 *
 * Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t length = 0;

	temp = h;
	while (temp)
	{
		count += 1;
		temp = temp->next;
	}
	return (count);
}
