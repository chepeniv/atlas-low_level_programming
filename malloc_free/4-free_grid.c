#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free memory allocated for 2D array of integers
 * @grid: pointer to the matrix to deallocate
 * @height: matrix height
 *
 * Return: void
 */
void free_grid(int **matrix, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(matrix[i]);

	free(matrix);
}
