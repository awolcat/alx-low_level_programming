#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free listint list recursively
 * @head: first node of list
 *
 * Description: walk to end of list, free on way back
 * Return: void
 */
void free_listint(listint_t *head)
{

	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
