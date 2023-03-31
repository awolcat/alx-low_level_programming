#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free singly linked list
 * @head: start node of list
 *
 * Description: free list
 * Return: void
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
