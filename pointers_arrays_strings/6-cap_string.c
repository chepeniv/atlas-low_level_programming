#include "main.h"

/**
 * cap_string - capitalize every word in a given string
 * @string: the string to operate on
 *
 * Return: pointer to string
 */
char *cap_string(char *string)
{
	int i = 0;

	while (string[i] != '\0')
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			if (
			string[i - 1] <= 'a' && 
			string[i - 1] >= 'z' &&
			string[i - 1] <= 'A' && 
			string[i - 1] >= 'Z'
			)
				string[i] -= 32;
		}
		i++;
	}

	return (string);
}
