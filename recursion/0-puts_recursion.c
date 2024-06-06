#include "main.h"

/**
 * _puts_recursion - prints out string by calling itself recursively
 * @string: the pointer to the string
 *
 * Return: void
 */
void _puts_recursion(char *string)
{
	if (*string == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*string);
	_puts_recursion(++string);
}
