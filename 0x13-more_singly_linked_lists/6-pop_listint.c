#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - delete head
 * @head: start of list
 *
 * Description: delete head node
 * Return: data at deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
