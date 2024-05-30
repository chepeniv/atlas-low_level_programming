#include "main.h"

/**
 * string_toupper - change all lowercase letters in a string to uppercase
 * @string: the string to operate on
 *
 * Return: pointer to string
 */
void reverse_array(int *string)
{
	int pos = 0;

	while (string[i] != '\0')
	{
		if (string[i] >= 'a' && string[i] <= 'z')
			string[i] -= 32;
		pos++;
	}
}
