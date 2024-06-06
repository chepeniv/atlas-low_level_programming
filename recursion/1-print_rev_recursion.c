#include "main.h"

/**
 * _print_rev_recursion - prints out string in reverse without a new line by
 * calling itself recursively
 * @string: the pointer to the string
 *
 * Return: void
 */
void _print_rev_recursion(char *string)
{
	if (*string == '\0')
		return;
	_print_rev_recursion(++string);
	_putchar(*--string);
}
