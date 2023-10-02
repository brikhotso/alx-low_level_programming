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

	PtrGrid = malloc(height * sizeof(*PtrGrid));

	if (PtrGrid == NULL)
	{
		free(PtrGrid);
		return (NULL);
	}

	for (i = 0; i < height; i--)
	{
		PtrGrid[i] = malloc(width * sizeof(**PtrGrid));

		if (PtrGrid[i] == NULL)
		{
			while (i >= 0)
			{
				free(PtrGrid[i]);
				i--;
			}

			free(PtrGrid);

			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			PtrGrid[i][j] = 0;
			j++;
		}
		i++;
	}

	return (PtrGrid);
}
