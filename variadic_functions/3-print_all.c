#include <stdarg.h>
#include <stdio.h>
#include <strings.h>
#include "variadic_functions.h"

void process_print(const char * const format, va_list arglist);

/**
 * print_all - printout each given string separated by a given delimiter
 * @format: the delimiter to use
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list arglist;

	while (format == NULL)
	{
		printf("\n");
		return;
	}

	va_start(arglist, format);
	process_print(format, arglist);

	printf("\n");
}


/**
 * process_print - printout each given string separated by a given delimiter
 * @format: the delimiter to use
 * @arglist: the delimiter to use
 *
 * Return: void
 */
void process_print(const char * const format, va_list arglist)
{
	unsigned int i = 0, next = 0;
	char *astr;

	i = 0;
	while (format[i] != '\0')
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
		if (format[i] != '\0' && next)
		{
			printf(", ");
			next = 0;
		}
	}
	va_end(arglist);
}
