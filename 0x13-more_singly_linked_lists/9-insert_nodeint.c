#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert node at idx
 * @head: start of list
 * @idx: index to insert node
 * @n: data to add to new node
 *
 * Description: insert new node in middle of list
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *new, *temp_next;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	temp = *head;
	for (i = 1; (i != idx) && temp; i++)
	{
		temp = temp->next;
	}
	if (i < idx)
		return (NULL);
	temp_next = temp->next;
	temp->next = new;
	new->next = temp_next;
	return (new);
}