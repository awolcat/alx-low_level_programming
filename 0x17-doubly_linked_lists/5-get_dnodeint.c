#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - get the node at given index
 * @head: start point of list
 * @index: index of desired node
 *
 * Return: pointer to the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int pos = 0, len = 0;
	dlistint_t *temp;

	temp = head;
	while (temp)
	{
		temp = temp->next;
		len += 1;
	}
	temp = head;
	if (temp && index <= len)
	{
		while (temp)
		{
			if (pos == index)
				break;
			temp = temp->next;
			pos += 1;
		}
	}
	else
		temp = NULL;
	return (temp);
}
