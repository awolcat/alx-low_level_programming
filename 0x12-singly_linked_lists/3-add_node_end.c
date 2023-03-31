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
	{
		free(end);
		return (NULL);
	}
	temp = malloc(sizeof(list_t));
	if (!temp)
	{
		free(temp);
		return (NULL);
	}
	end->len = strlen(str);
	end->next = NULL;
	end->str = strdup(str);
	/* if strdup fails, free memory, return NULL */
	if (!strdup(str))
	{
		free(end);
		free(temp);
		return (NULL);
	}
	/* if list has 0 length, new node is head */
	if (*head == NULL)
	{
		*head = end;
		free(temp);
		return (end);
	}
	/*
	 * else get another pointer to head and iterate to end
	 * of list and add new node
	 */
	else if (*head)
	{
		temp = *head;
		while ((temp->next) != NULL)
			temp = temp->next;
		temp->next = end;
		if ((temp->next) == end)
			return (end);
	}
	return (NULL);
}
