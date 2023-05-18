#include <stdlib.h>
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
	unsigned int count = 0, len = 0;

	temp = *h;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (temp)
	{
		while (temp)
		{
			len += 1;
			temp = temp->next;
		}
		temp = *h;
		if (idx <= len)
		{
			while (temp)
			{
				if (idx == count)
					break;
				temp = temp->next;
				count += 1;
			}
		}
		else
			return (NULL);
		new->prev = temp->prev;
		new->next = temp;
		new->n = n;
		(temp->prev)->next = new;
		temp->prev = new;
	}
	return (new);
}
