#include "main.h"

/**
 * _strpbrk - find the first location in a string wherein any of a given set of
 * characters occur
 * @target: the string to analyse through
 * @accept: the string containing chars that will be accepted
 *
 * Return: a char* denoting the first occurance 
 */
char *_strpbrk(char *target, char *accept);
{
	int a;
	int b;

	a = 0;
	while (target[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (target[a] == accept[b])
				return (&target[a]);
			b++;
		}
		a++;
	}
	return (NULL);
}
