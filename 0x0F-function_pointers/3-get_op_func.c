#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - selects function
 * @s: operator that determines function selection
 *
 * Description: select a function
 * Return: an integer index of selected operation
 */
int (*get_op_func(char *s))(int a, int b)
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
	while (ops[i].f != NULL && ops[i].op[0] != s[0])
	{
		return (ops[i].f);
		i++;
	}
	return (ops[i].f);
}
