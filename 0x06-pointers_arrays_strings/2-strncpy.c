#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: first string
 * @src: second string
 * @n: number of bytes used
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (src[i++])
		len++;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (i = len; n > i; i++)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
