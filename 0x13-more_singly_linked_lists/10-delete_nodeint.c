#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *temp_next;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
		temp = temp->next;
	if (index == 1)
	{
		temp_next = (*head)->next;
		(*head)->next = temp_next->next;
	}
	temp = *head;
	for (i = 0; (i != index - 1) && temp; i += 1)
	{
		temp = temp->next;
	}
	temp_next = temp->next;
	temp->next = temp_next->next;
	return (1);
}
