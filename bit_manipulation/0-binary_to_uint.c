#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - translates binary code into positive decimals integers
 * @b: string consisting of binary digits
 *
 * Return: the decimal conversion, or 0 upon failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0;
	unsigned int pos = 0;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	while (pos < len)
	{
		if (b[pos] == '1')
			sum += 1 << (len - pos - 1);
		pos++;
	}

	return (sum);
}
