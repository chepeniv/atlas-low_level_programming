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
	long number = 0;
	int position = 0;
	int sign = 1;
	int final = 0;
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

	if (sign < 0 && number > INT_MAX) final = INT_MIN;
	else if (sign > 0 && number > INT_MAX) final = INT_MAX;
	else final = (int) (number * sign);
	return (final);
}
