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

	PtrGrid = (int **) malloc(width * sizeof(int *));

	if (PtrGrid == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		PtrGrid[i] = (int *) malloc(height * sizeof(int));

		if (PtrGrid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(PtrGrid[j]);
			}

			free(PtrGrid);

			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			PtrGrid[i][j] = 0;
		}
	}

	return (PtrGrid);
}
