#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - calculator program
 * @argc: number of parameters passed
 * @argv: calculation to carry out
 *
 * Return: int exit code
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
	if ((*op != '+' && *op != '-' && *op != '*' && *op != '/' && *op != '%') ||
		strlen(argv[2]) != 1)
	{
		printf("Error\n");
		return (99);
	}
	if ((*op == '/' || *op == '%') && *argv[3] == '0')
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
