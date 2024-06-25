#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - printout each given string separated by a given delimiter
 * @format: the delimiter to use
 *
 * Return: void
 */
// process only "cifs" ignore all other chars
// if an "s" is NULL print "(nil)"
// not allowed : for, goto, ternary, else, do-while
// maximum two whiles
// maximum two ifs
// maximum nine variable
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list arglist;
	char * astr;
	int next = 0;

	va_start(arglist, format);

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
		if (format[i] == '\0')
			printf("\n");
		else if (next)
		{
			printf(", ");
			next = 0;
		}
	}

	va_end(arglist);
}
