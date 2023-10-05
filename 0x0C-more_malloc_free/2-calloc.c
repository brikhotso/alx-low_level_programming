#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory of an array using malloc
 * @nmemb: elements of array
 * @size: size of array
 *
 * Return: pointer to allocated memory
 * if nmemb or size = 0 or malloc fail return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);

	for (i  = 0; i < nmemb * size; i++)
	{
		memory[i] = '\0';
	}

	return (memory);
}
