#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * given as a parameter on each element of an array
 * @array: pointer to array
 * @size: size of arrray
 * @action: pointer to function
 *
 * Return: executed function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
