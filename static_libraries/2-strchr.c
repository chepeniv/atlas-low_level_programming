#include "main.h"
#include <stddef.h>

/**
 * _strchr - search a string for the first instance of a char
 * @string: the string to search through
 * @csearch: the char to search for
 *
 * Return: a char pointer to location where char was found
 */
char *_strchr(char *string, char csearch)
{
	int index = 0;

	while (string[index] != '\0')
	{
		if (string[index] == csearch)
			return (&string[index]);
		index++;
	}

	if (string[index] == csearch)
		return (&string[index]);
	else
		return (NULL);
}
