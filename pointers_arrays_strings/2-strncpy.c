#include "main.h"

/**
 * _strncpy - copy the first 'select' bytes from 'source' onto 'dest'
 * @dest: the location in memory to copy data to
 * @src: the string containing the data to copy from
 * @select: the number of bytes to copy from 'src'
 *
 * Return: a pointer to the location of the duplicated data
 */
char *_strncpy(char *dest, char *src, int select)
{
	int i = 0;

	while (i < select && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < select)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
