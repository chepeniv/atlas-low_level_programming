#include "main.h"

/**
 * _print_rev_recursion - prints out string in reverse without a new line by
 * calling itself recursively
 * @string: the pointer to the string
 *
 * Return: void
 */
int _strlen_recursion(char *string)
{
	if (*string == '\0')
		return (0);
	return (1 + _strlen_recursion(++string));
}
