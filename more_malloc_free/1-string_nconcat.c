#include <stdlib.h>
#include "main.h"

char *handle_nulls(char *strA, char *strB, unsigned int n);

/**
 * string_nconcat - concat two given strings upto n chars of the second
 * @strA: prefix string
 * @strB: suffix string
 * @n: number of characters to take from the suffix string
 *
 * Return: success - pointer to the constructed string; failure - NULL
 */
char *string_nconcat(char *strA, char *strB, unsigned int n)
{
	char *strAnB;
	unsigned int lenA, lenB, i;

	if (strA == NULL || strB == NULL)
		return (handle_nulls(strA, strB, n));

	for (lenA = 0; strA[lenA] != '\0'; lenA++) ;
	for (lenB = 0; strB[lenB] != '\0'; lenB++) ;

	if (n >= lenB)
		n = lenB;

	strAnB = malloc((lenA + n + 1) * sizeof(char));
	if (strAnB == NULL)
		return (NULL);

	for (i = 0; strA[i] != '\0'; i++)
		strAnB[i] = strA[i];

	for (i = 0; i < n; i++)
		strAnB[i + lenA] = strB[i];

	strAnB[i + lenA] = '\0';

	return (strAnB);
}

char *handle_nulls(char *strA, char *strB, unsigned int n)
{
	char *nullcase;

	if (strA == NULL && strB != NULL)
		nullcase = string_nconcat("", strB, n);
	else if (strA != NULL && strB == NULL)
		nullcase = string_nconcat(strA, "", n);
	else if (strA == NULL && strB == NULL)
	{
		nullcase = malloc(sizeof(char));
		nullcase[0] = '\0';
	}
	return (nullcase);
}
