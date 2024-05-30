#include "main.h"

/**
 * _strspn - find the length of the prefix substring wherein _only_ a given set
 * of characters occur
 * @check_str: the string to analyse through
 * @accept_set: the string containing chars that will be accepted
 *
 * Return: an unsigned int denoting the length of the substring containing only
 * char's in the accept-set
 */
unsigned int _strspn(char *check, char *accept)
{
	unsigned int a = 0;
	unsigned int b = 0;

	while (accept[a] != '\0')
	{
		while (check[b] != '\0')
		{
			if (accept[a] == check[b])
				break;
			b++;
		}

		if (check[b] == '\0')
			return (a++);

		b = 0;
		a++;
	}
	return (a);
}
