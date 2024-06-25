#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - sums all of the given arguments after the first
 * @separator: the number of arguments to sum
 * @n: the number of arguments to sum
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
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
		printf("%d%s", va_arg(arglist, int), separator);
	printf("%d\n", va_arg(arglist, int));

	va_end(arglist);
}
