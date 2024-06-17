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
	size_t lenA, lenB, i;

	if (A == NULL && B != NULL)
		return str_concat(B, "");
	if (A != NULL && B == NULL)
		return str_concat(A, "");
	if (A == NULL && B == NULL)
	{
		AB = malloc(sizeof(char));
		AB[0]= "";
	}

	for (lenA = 0; A[lenA] != '\0'; lenA++);
	for (lenB = 0; B[lenB] != '\0'; lenB++);

	AB = malloc((lenA + lenB - 1) * sizeof(char));
	if (AB == NULL)
		return (NULL);

	for (i = 0; A[i] != '\0'; i++)
		AB[i] = A[i];
	for (i = 0; B[i] != '\0'; i++)
		AB[i + lenA] = B[i];
	AB[i + lenA] = '\0';

	return (AB);
}
