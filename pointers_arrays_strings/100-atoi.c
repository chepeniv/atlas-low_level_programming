#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * countDigits - calculate the number of digits in a base ten number
 * @number: int to examine
 *
 * Return: int denoting the number of digits in 'number'
 */
int countDigits(int number)
{
	if (number < 10) return 1;
	return 1 + countDigits(number / 10);
}

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
	int digits = 0;
	int maxDigits = countDigits(INT_MAX);
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
				if (digits < maxDigits)
				{
					number *= 10;
					number += (int)character - 48;
					character = string[++position];
				}
				else
				{
					number = INT_MAX;
				}
			}
			break;
		}
		position++;
	}

	if (sign < 0 && number == INT_MAX) return INT_MIN;
	else number *= sign;
	return (number);
}
