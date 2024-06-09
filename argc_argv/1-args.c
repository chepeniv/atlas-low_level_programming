#include <stdio.h>

/**
 * main - a program that outputs the number of arguments passed to it
 * @argc: number of arguments passed
 * @argv: array of pointers to strings arguments passed
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
