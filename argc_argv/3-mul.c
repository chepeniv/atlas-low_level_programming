#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints each argument passed to it per line
 * @argc: number of arguments passed
 * @argv: array of pointers to string-arguments passed at runtime
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a;
	int b;
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	product = a * b;
	printf("%d\n", product);

	return (0);
}
