#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - construct an integer from a given string
 * @string: pointer to string
 *
 * Return: resultant int
 */
int _atoi(char *string)
{
	int number = 0;
	int position = 0;
	int sign = 1;
	char character;

	while (string[position] != '\0')
	{
		character = string[position];

		if (character == '-')
			sign *= -1;
		if (character >= '0' && character <= '9')
		{
			number += (int)character - 48;
			character = string[++position];
			while (character >= '0' && character <= '9')
			{
				number *= 10;
				number += (int)character - 48;
				character = string[++position];
			}
			break;
		}
		position++;
	}

	number *= sign;
	return (number);
}
