#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - construct a 2D array of integers initialized to 0
 * @width: array width
 * @heigh: array height
 *
 * Return: success - return pointer to array; failure - return NULL
 */
int **alloc_grid(int width, int height)
{
	int *vector;
	int **matrix;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		vector = malloc(width * sizeof(int));
		if (vector == NULL)
			return (NULL);

		for (j = 0; j < width; j++)
			vector[j] = 0;
		matrix[i] = vector;
		free(vector);
	}

	return (matrix);
}
