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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int product = a * b;

	printf("%d\n", product);

	return (0);
}
