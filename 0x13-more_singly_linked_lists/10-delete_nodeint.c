#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - delete node at given index
 * @head: start point of node
 * @index: index of node to delete
 *
 * Description: delete node at given index
 * Return: 1 success or -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *temp_next;

	if (*head == NULL)
		return (-1);
	temp = *head;
	temp_next = *head;
	if (index == 0)
	{
		temp = temp->next;
		*head = temp;
		free(temp_next);
		return (1);
	}
	if (index == 1)
	{
		temp_next = (*head)->next;
		(*head)->next = temp_next->next;
		free(temp_next);
		return (1);
	}
	temp = *head;
	for (i = 0; (i != index) && temp_next; i += 1)
	{
		temp_next = temp;
		temp = temp->next;
	}
	temp_next->next = temp->next;
	free(temp);
	return (1);
}
