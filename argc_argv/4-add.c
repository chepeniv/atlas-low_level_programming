#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int isnum(char *word);

/**
 * main - output the sum of the arguments passed
 * @argc: number of arguments passed
 * @argv: expecting integers
 *
 * Return: 0 upon successful exection, 1 if any argument is not an int
 */
int main(int argc, char **argv)
{
	int i;
	int num;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (isnum(argv[i]))
		{
			num = atoi(argv[i]);
			sum += num;
		}
		else 
		{
			printf("Error\n");
			return (1);
		}

	}
	printf("%d\n", sum);
	return (0);
}

/**
 * isnum - checks whether a string is an positive integer
 * @word: string to examine
 *
 * Return: 0 if failing, 1 if passing
 */
int isnum(char *word)
{
	int i;
	char c;

	i = 0;
	while (word[i] != '\0')
	{
		c = word[i];
		if (isdigit(c))
			i++;
		else
			return (0);
	}
	return (1);
}
