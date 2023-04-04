#include "lists.h"
/**
 * get_nodeint_at_index - get node at given index
 * @head: start of list
 * @index: index of node
 *
 * Description: get node at given index
 * Return: node at given index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; (i != index) && head; i++)
	{
		head = head->next;
	}
	if (i < index)
		return (NULL);
	return (head);
}
