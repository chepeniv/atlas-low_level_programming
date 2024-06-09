#include <stdio.h>

/**
 * main - a program that prints each argument passed to it per line
 * @argc: number of arguments passed
 * @argv: array of pointers to string-arguments passed at runtime
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
