#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previous memory
 * @old_size: size of allocated memory block
 * @new_size: size of new allocated memory block
 *
 * Return: pointer to space allocated
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newspace;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
			return (ptr);
	}
	newspace = malloc(new_size);

	free(ptr);
	return (newspace);
}
