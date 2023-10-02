#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to dimensional array , return NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **PtrGrid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	PtrGrid = malloc(height * sizeof(int *));

	if (PtrGrid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		PtrGrid[i] = malloc(width * sizeof(int));

		if (PtrGrid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(PtrGrid[i]);

			free(PtrGrid);

			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			PtrGrid[i][j] = 0;
	}

	return (PtrGrid);
}
