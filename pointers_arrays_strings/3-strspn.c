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
unsigned int _strspn(char *check_str, char *accept_set)
{
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int size = 0;

	while (check_str[a] != '\0')
	{
		while (accept_set[b] != '\0')
		{
			if (accept_set[a] == check_str[b])
			{
				size++; 
				break;
			}
			else
			{
				return (size);
			}
			b++;
		}

		if (accept_set[a] == '\0')
			break;

		b = 0;
		a++;
	}
	return (size);
}
