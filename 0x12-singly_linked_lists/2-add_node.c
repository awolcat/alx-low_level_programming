#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node - add node to list
 * @head: pointer to pointer to NULL
 * @str: string to add to new node
 *
 * Description: add node to list
 * Return: address to head of list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
