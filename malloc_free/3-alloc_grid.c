#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - construct a 2D array of integers initialized to 0
 * @width: array width
 * @height: array height
 *
 * Return: success - return pointer to array; failure - return NULL
 */
int **alloc_grid(int width, int height)
{
	int *vector;
	int **matrix;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);

	vector = malloc(width * sizeof(int));
	if (vector == NULL)
	{
		free(matrix);
		return (NULL);
	}

	for (i = 0; i < width; i++)
		vector[i] = 0;

	for (i = 0; i < height; i++)
		matrix[i] = vector;

	return (matrix);
}
