#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free listint list and set head to NULL
 * @head: address of pointer to first node of list
 *
 * Description: walk to end of list, free on way back
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		free(*head);
		*head = temp->next;
	}
}
