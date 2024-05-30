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
			string[i - 1] == ' ' || 
			string[i - 1] == '\t' ||
			string[i - 1] == '\n' || 
			string[i - 1] == ',' ||
			string[i - 1] == ';' ||
			string[i - 1] == '.' ||
			string[i - 1] == '!' ||
			string[i - 1] == '?' ||
			string[i - 1] == '"' ||
			string[i - 1] == '(' ||
			string[i - 1] == ')' ||
			string[i - 1] == '{' ||
			string[i - 1] == '}'
			)
				string[i] -= 32;
		}
		i++;
	}

	return (string);
}
char *leet(char*);
