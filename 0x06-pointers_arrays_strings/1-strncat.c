#include "main.h"

/**
 * *_strcat - concentrates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes used
 *
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0' ; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
