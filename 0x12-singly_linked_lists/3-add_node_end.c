#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - add node at end of list
 * @head: starting node of list
 * @str: string to add to new node
 *
 * Description: add node to end
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *temp;

	end = malloc(sizeof(list_t));
	if (!end)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);
	end->str = strdup(str);
	end->len = strlen(str);
	end->next = NULL;
	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = end;
	}
	return (end);
}
