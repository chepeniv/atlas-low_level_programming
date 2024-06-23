#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/* only the main func allowed
 * no direct calls to any of the op_functions
 * use atoi on ints
 * no loops
 * no more than 3 if-statements
 */
int main(int argc, char **argv)
{
	int a, b, c;
	char *op = argv[2];
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if
		(
		*op != '+' &&
		*op != '-' &&
		*op != '*' &&
		*op != '/' &&
		*op != '%'
		)
	{
		printf("Error\n");
		return (99);
	}
	if ((
		*op == '/' ||
		*op == '%'
		) &&
		*argv[3] == '0'
		)
	{
		printf("Error\n");
		return (100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	f = get_op_func(op);
	c = f(a, b);
	printf("%d\n", c);

	return (0);
}
