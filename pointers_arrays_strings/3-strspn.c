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
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int size = 0;

	while (check_str[i] != '\0')
	{
		while (search_set[j] != '\0')
		{
			if (check_str[i] == search_set[j])
			{
				size = i + 1; 
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (size);
}
