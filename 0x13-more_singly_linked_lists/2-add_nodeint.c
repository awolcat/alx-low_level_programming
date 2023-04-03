#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add node at start of list
 * @head: first node in list
 * @n: data to add to node
 *
 * Description: Add node to position 1 in list
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
