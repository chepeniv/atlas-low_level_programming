#include "main.h"
#include <stdio.h>

/**
 * _atoi - construct an integer from a given string
 * @source: pointer to string
 *
 * Return: resultant int
 */
int _atoi(char *string)
{
	int construction = 0;
	int position = 0;
	int sign = 1;
	char character;

	while (source[position] != '\0')
	{
		character = source[position];

		if (character == '-')
			sign *= -1;
		if (character >= '0' && character <= '9')
			construction += (int)character - 48;

		position++;
	}
	construction *= sign;

	return (construction);
}
