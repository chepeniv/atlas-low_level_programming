#include "main.h"

/**
 * string_toupper - change all lowercase letters in a string to uppercase
 * @string: the string to operate on
 *
 * Return: pointer to string
 */
void string_toupper(int *string)
{
	int i = 0;

	while (string[i] != '\0')
	{
		if (string[i] >= 'a' && string[i] <= 'z')
			string[i] -= 32;
		pos++;
	}
}
