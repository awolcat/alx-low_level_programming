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
	end->len = strlen(str);
	end->next = NULL;
	end->str = strdup(str);
	/* if strdup fails, free memory, return NULL */
	if (!strdup(str))
	{
		return (NULL);
	}
	/* if list has 0 length, new node is head */
	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	/*
	 * else get another pointer to head and iterate to end
	 * of list and add new node
	 */
	else
	{
		temp = *head;
		while (temp)
			temp = temp->next;
		temp->next = end;
		return (end);
	}
}
