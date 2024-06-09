#include <stdio.h>

/**
 * main - a program that outputs its name to stdout
 * @argc: number of arguments passed
 * @argv: array of pointers to strings arguments passed
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
