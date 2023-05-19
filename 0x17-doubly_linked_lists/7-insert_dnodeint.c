#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at given index
 * @h: head of the list
 * @idx: index where to insert new node
 * @n: number to store in new node
 *
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int count = 0;
	unsigned int len = 0;

	temp = *h;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	while (temp)
	{
		len += 1;
		temp = temp->next;
	}
	temp = *h;
	if (temp && idx < len)
	{
		while (temp)
		{
			if (idx == count)
				break;
			temp = temp->next;
			count += 1;
		}
		new->prev = temp->prev;
		new->next = temp;
		temp->prev = new;
		if (new->prev != NULL)
			(new->prev)->next = new;
		else
			*h = new;
	}
	else
		return (NULL);
	return (new);
}
