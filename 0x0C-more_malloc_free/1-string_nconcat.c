#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters of second string
 *
 * Return: concatenated strings, else NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strnCon;
	unsigned int i, j;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (len2 <= n)
		n = len2;

	strnCon = malloc(len1 + n + 1);

	if (strnCon == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		strnCon[i] = s1[i];
	for (j = len1; j < len1 + n; j++)
		strnCon[j] = s2[j - len1];
	strnCon[j] = '\0';

	return (strnCon);
}
