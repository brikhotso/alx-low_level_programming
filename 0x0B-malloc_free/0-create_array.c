#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of char and initiate it with a specific char
 * @size: size of array
 * @c: character in the array
 *
 * Return: pointer to the array , NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *PtrArr;
	unsigned int count;

	PtrArr = (char *) malloc(size * sizeof(char));

	if (size == 0 || PtrArr == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < size; count++)
		PtrArr[count] = c;

	return (PtrArr);
}
