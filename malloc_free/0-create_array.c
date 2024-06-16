#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array initialized with a specified char
 * @size: the size of the array
 * @c: the char to fill the array with
 *
 * Return: pointer to the constructed array upon success, otherwise NULL
 */
char *create_array(unsigned int size, char c)
{
	char *c_string;
	size_t i;

	if (size == 0)
		return (NULL);

	c_string = malloc(size * sizeof(*c_string));
	if (c_string == NULL)
		return (NULL);

	for (i = 0; i < size; ++i)
		c_string[i] = c;
	c_string[size] = '\0';

	return (c_string);
}
