#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of intergers
 * @min: minimum interger
 * @max: maximum integer
 *
 * Return: pointer to new array , else return NULL
 */
int *array_range(int min, int max)
{
	int *range;
	int i;

	if (min > max)
		return (NULL);

	range = malloc((max - min + 1) * sizeof(int));

	if (range == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		range[i] = min;
		min++;
	}

	return (range);
}
