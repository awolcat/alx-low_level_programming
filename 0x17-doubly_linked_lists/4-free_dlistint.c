#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - free a doubly linked list
 * @head: list starting point
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *temp2;

	temp = head;
	temp2 = temp;
	if (temp)
	{
		while (temp2)
		{
			temp2 = temp2->next;
			temp = temp2;
			free(temp);
		}
		free(head);
	}
}
