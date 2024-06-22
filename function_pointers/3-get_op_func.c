#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

// only the one function used to select the correct operation
// s the operator char
// no switch statements
// no for or do ... while loops
// no goto
// no else
// no more than one if
// no more than one while
// return NULL if no operators match
// only the two variables declared allowed
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};


	return (-1);
}
