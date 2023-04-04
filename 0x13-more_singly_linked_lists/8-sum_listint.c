#include "lists.h"
/**
 * sum_listint - find sum of data in list
 * @head: start of list
 *
 * Description: sum of data in nodes
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int i, sum = 0;

	if (head == NULL)
		return (0);
	for (i = 0; head; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
