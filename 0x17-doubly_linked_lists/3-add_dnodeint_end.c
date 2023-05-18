#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - add a new node at end of list
 * @head: start of the list
 * @n: data to store in new node
 *
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new;

	temp = (*head);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (temp == NULL)
	{
		(*head) = new;
		new->next = NULL;
		new->prev = NULL;
	}
	else if (temp->next == NULL)
	{
		temp->next = new;
		new->next = NULL;
		new->prev = temp;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
		new->next = NULL;
		new->prev = temp;
	}
	return (new);
}
