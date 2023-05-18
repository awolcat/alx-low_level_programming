#include "lists.h"
/**
 * sum_dlistint - find sum of data in a list
 * @head: starting point of list
 *
 * Return: int sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
