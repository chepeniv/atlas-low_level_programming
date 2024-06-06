#include "main.h"

/**
 * _strlen_recursion - calculates the length of a given string by calling
 * itself recursively
 * @string: pointer to the string
 *
 * Return: an int indicating the size of the string passed
 */
int _strlen_recursion(char *string)
{
	if (*string == '\0')
		return (0);
	return (1 + _strlen_recursion(++string));
}
