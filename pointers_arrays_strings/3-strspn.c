#include "main.h"

/**
 * _strspn - find the length of the prefix substring wherein _only_ a given set
 * of characters occur
 * @check: the string to analyse through
 * @accept: the string containing chars that will be accepted
 *
 * Return: an unsigned int denoting the length of the substring containing only
 * char's in the accept-set
 */
unsigned int _strspn(char *check, char *accept)
{
	unsigned int a = 0;
	unsigned int b = 0;

	while (check[a] != '\0')
	{
		while (accept[b] != '\0')
		{
			if (accept[b] == check[a])
				break;
			b++;
		}

		if (accept[b] == '\0')
			return (a++);

		b = 0;
		a++;
	}
	return (a++);
}
