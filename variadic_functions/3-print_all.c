#include <stdarg.h>
#include <stdio.h>
#include <strings.h>
#include "variadic_functions.h"

/**
 * print_all - printout each given string separated by a given delimiter
 * @format: the delimiter to use
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char * astr;
	va_list arglist;
	unsigned int length = 0;
	int next = 0;

	va_start(arglist, format);

	while (format[i] != '\0')
		length = i++;

	i = 0;
	while (i <= length)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(arglist, int));
				next = 1;
				break;

			case 'i':
				printf("%d", va_arg(arglist, int));
				next = 1;
				break;

			case 'f':
				printf("%f", va_arg(arglist, double));
				next = 1;
				break;

			case 's':
				astr = (char *) va_arg(arglist, void *);
				if (astr == NULL)
					astr = "(nil)";
				printf("%s", astr);
				next = 1;
				break;
		}

		i++;
		if (i <= length && next)
		{
			printf(", ");
			next = 0;
		}
	}
	printf("\n");

	va_end(arglist);
}
