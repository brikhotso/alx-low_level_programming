#include <stdlib.h>
#include "main.h"

/**
 * _strdup -returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter
 * @str: - original given string
 *
 * Return: duplicate string ,NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *PtrStr;

	int len = 0;
	int count;

	while (len != '\0')
	{
		len++;
	}

	PtrStr = (char *) malloc(len * sizeof(char) + 1);

	if (PtrStr == 0)
	{
		return (NULL);
	}

	for (count = 0; str[count] != '\0' ; count++)
	{
		PtrStr[count] = str[count];
	}

	PtrStr[count] = '\0';

	return (PtrStr);
}
