#include "main.h"

/**
 * *_strcat - concentrates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char s1[100];
	char s2[100];

	char *dest = s1;
	char *src = s2;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}
