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
	int i;

	i = 0;

	while (i < n && *(src + i))
	{
		*(src + i) = *(dest + i);
		i++;
	}
	while (n > i)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
