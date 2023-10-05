#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned integer
 *
 * Return: pointer to allocated memory, else terminate with status value 98
 */
void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
