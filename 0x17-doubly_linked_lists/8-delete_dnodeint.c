#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at given index
 * @head: start point of node
 * @index: index of node to delete
 *
 * Return: 1 success!
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int pos = 0;
	unsigned int len = 0;

	temp = *head;
	while (temp)
	{
		len += 1;
		temp = temp->next;
	}
	temp = *head;
	if (index < len)
	{
		while (temp)
		{
			if (index == pos)
				break;
			temp = temp->next;
			pos += 1;
		}
		if (index == 0)
		{
			*head = temp->next;
			free(temp);
			return (1);
		}
		(temp->prev)->next = temp->next;
		(temp->next)->prev = temp->prev;
		free(temp);
		return (1);
	}
	return (-1);
}
