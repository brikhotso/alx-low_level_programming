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

	if (str == 0)
		return (NULL);

	while (str[le]n != '\0')
	{
		len++;
	}

	PtrStr = (char *) malloc((len + 1) * sizeof(char));

	if (PtrStr == NULL)
	{
		return (NULL);
	}

	for (count = 0; count <= len ; count++)
	{
		PtrStr[count] = str[count];
	}

	return (PtrStr);
}
