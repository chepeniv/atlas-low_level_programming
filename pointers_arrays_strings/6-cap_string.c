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
		if (
		string[i] == ' ' ||
		string[i] == '\t' ||
		string[i] == '\n' ||
		string[i] == ',' ||
		string[i] == ';' ||
		string[i] == '.' ||
		string[i] == '!' ||
		string[i] == '?' ||
		string[i] == '"' ||
		string[i] == '(' ||
		string[i] == ')' ||
		string[i] == '{' ||
		string[i] == '}'
		)
		{
			i++;
			if (string[i] >= 'a' && string[i] <= 'z')
				string[i] -= 32;
			if (string[i] == '\0')
				break;
		}
		i++;
	}

	return (string);
}
