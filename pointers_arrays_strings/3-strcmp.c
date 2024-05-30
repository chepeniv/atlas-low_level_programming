#include "main.h"

/**
 * _strcmp - compare two given strings lexicographically
 * @strA: first string to compare
 * @strB: second string to compare
 *
 * Return: 0 if strings are identical, or upon on the first char inequality,
 * return the differnce in value of the char's ascii codes (charA - charB)
 */
int _strcmp(char *strA, char *strB)
{
	int diff;
	int i = 0;

	while (strA[i] == strB[i])
	{
		if (strA[i] != '\0')
			i++;
		else
			break;
	}

	diff = strA[i] - strB[i];
	return (diff);
}
