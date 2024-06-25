#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - printout each given string separated by a given delimiter
 * @separator: the delimiter to use
 * @n: the number of strings to proccess
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *current;
	va_list arglist;

	if (separator == NULL)
		separator = "";
	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(arglist, n);

	for (i = 0; i < n - 1; i++)
	{
		current = (char *) va_arg(arglist, void *);
		if (current == NULL)
			current = "(nil)";
		printf("%s%s", current, separator);
	}
	current = (char *) va_arg(arglist, void *);
	if (current == NULL)
		current = "(nil)";
	printf("%s\n", current);

	va_end(arglist);
}
