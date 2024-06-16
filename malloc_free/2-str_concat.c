#include <stdlib.h>
#include "main.h"

/**
 * _strdup - create a duplicate of a given string upon the heap
 * @original: string to duplicate.
 *
 * Return: pointer to the constructed array upon success, otherwise NULL
 */
char *str_concat(char *A, char *B)
{
	char *AB;
	size_t lenA;
	size_t lenB;
	size_t i;

	lenA = 0;
	while (A[lenA] != '\0')
		lenA++;
	lenA--;

	lenB = 0;
	while (B[lenB] != '\0')
		lenB++;
	lenB--;

	AB = malloc(lenA + lenB - 1);
	if (AB == NULL)
		return (NULL);

	i = 0;
	while (A[i] != '\0')
	{
		AB[i] = A[i];
		i++;
	}

	i--;
	while (B[i] != '\0')
	{
		AB[i] = B[i];
		i++;
	}

	return (AB);
}
