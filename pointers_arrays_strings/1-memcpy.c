#include "main.h"

/**
 * _memcpy - replaces the first n bytes of one string into another
 * @dest: the string to copy into
 * @source: the string to copy from
 * @amount: the number of indeses to copy from 'source
 *
 * Return: a string pointer to the string operated on
 */
char *_memcpy(char *dest, char *source, unsigned int amount)
{
	unsigned int index = 0;

	while (index < amount)
	{
		dest[index] = source[index];
		index++;
	}
	return (dest);
}
