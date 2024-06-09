#include <stdio.h>
#include <stdlib.h>

/**
 * main - output the product of the first argument with the second
 * @argc: number of arguments passed
 * @argv: expecting integers
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
