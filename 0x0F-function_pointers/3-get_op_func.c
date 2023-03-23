#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - selects function
 * @s: operator that determines function selection
 *
 * Description: select a function
 * Return: an integer index of selected operation
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	if (s == NULL)
		return (NULL);

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
		return (ops[i].f);

		i++;
	}
	return (ops[i].f);
}
