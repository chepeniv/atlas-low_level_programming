#include "main.h"

/**
 * _strspn - find the length of a prefix substring wherein a set of given
 * characters occur
 * @check_str: the string to search through
 * @search_set: the string containing the char's to search for
 *
 * Return: an unsigned int denoting the length of the substring containg at 
 * least one instance of each element of search_set
 */
unsigned int _strspn(char *check_str, char *search_set)
{
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int size = 0;

	while (search_set[a] != '\0')
	{
		while (check_str[b] != '\0')
		{
			if (search_set[a] == check_str[b])
			{
				if (size <= a)
					size = a + 1; 
				break;
			}
			b++;
		}
		b = 0;
		a++;
	}
	return (size);
}
