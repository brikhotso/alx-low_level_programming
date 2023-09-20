#include "main.h"

/**
 * *leet - encode a string to 1337
 * @str: sting to encode
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;

	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; str[i] ; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == str[i])
				str[i] = b[j];
		}
	}
	return (str);
}
