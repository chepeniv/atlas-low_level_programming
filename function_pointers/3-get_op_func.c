#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - takes a char* and determines a function
 * to return
 * @s: the determinant string
 *
 * Return: NULL or a pointer to a function of the form
 * int op(int, int)
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
