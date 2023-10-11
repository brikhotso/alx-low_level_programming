#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * given as a parameter on each element of an array
 * @array: pointer to array
 * @size: size of arrray
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL || size <= 0)
		return;

	for (i = 0; i < size; i++)
			action(array[i]);
}
