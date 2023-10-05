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
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);

	while (i < (nmemb * size))
	{
		i++;
		memory[i] = '\0';
	}

	return (memory);
}
