#include "main.h"

/**
 * _memset - fills the first n number of memory addresses of a given string 
 * array with a constant value
 * @string: the string to operate on
 * @value: the char value to overwrite into prefix positions
 * @amount: the number of prefix positions to write the 'value' into
 *
 * Return: a string pointer to the string operated on
 */
char *_memset(char *string, char value, unsigned int amount)
{
	unsigned int index = 0;
	/*unsigned int size = sizeof(string);*/

	while (index < amount/*&& index < size*/)
	{
		string[index] = value;
		index++;
	}
	return string;
}
