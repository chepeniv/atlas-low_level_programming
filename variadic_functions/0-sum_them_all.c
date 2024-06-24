#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all of the given arguments after the first
 * @n: the number of arguments to sum
 *
 * Return: the resultant sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);

	va_end(numbers);
	return (sum);
}
