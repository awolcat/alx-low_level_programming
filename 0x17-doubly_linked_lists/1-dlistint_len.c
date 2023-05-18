#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - find the legth of a doubly linked list
 * @h: head of the list
 *
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t length = 0;

	temp = h;
	while (temp)
	{
		length += 1;
		temp = temp->next;
	}
	return (length);
}
