#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concentenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated strings, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *PtrCon;

	int len1 = 0;
	int len2 = 0;
	int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	PtrCon = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (PtrCon == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		PtrCon[i] = s1[i];

	for (j = 0; j < len2; j++)
		PtrCon[i + j] = s2[j];

	PtrCon[i + j] = '\0';

	return (PtrCon);
}
