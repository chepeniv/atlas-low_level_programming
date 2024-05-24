#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy one string's content into another's memory
 * @dest: pointer of string to copy to
 * @source: pointer of string to copy from
 *
 * Return: string pointer to dest
 */
char *_strcpy(char *dest, char *source)
{
	int position = 0;

	while (source[position] != '\0')
	{
		dest[position] = source[position];
		position++;
	}

	dest[position] = '\0';

	return (dest);
}
