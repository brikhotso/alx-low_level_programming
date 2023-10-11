#include "function_pointers.h"

/**
 * int_index - searches for an interger
 * @size: number of elements in array
 * @array: pointer to array
 * @cmp: pointer to function used to compare values
 *
 * Return: indexof first element else return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
