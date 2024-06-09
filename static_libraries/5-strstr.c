#include "main.h"
#include <stddef.h>

/**
 * _strstr - find the first occurance of a substring withing another string
 * @haystack: the string to search through
 * @needle: the string to search for
 *
 * Return: a char* denoting the first find
 */
char *_strstr(char *haystack, char *needle)
{
	int A;
	int B;

	A = 0;
	if (needle[0] == '\0')
		return (haystack);

	while (haystack[A] != '\0')
	{
		B = 0;
		while (haystack[A + B] == needle[B])
		{
			B++;
			if (needle[B] == '\0')
				return (&haystack[A]);
		}
		A++;
	}
	return (NULL);
}
