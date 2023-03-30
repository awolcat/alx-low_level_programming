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
	list_t *buffer;

	while (head != NULL)
	{
		buffer = head->next;
		free(head->str);
		free(head);
		head = buffer;
	}
}
