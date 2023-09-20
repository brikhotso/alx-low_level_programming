#include "main.h"

/**
 * rot13 - encode a string using rot13
 * @str: string to encode
 *
 * Return: Encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] ; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (b[j] == str[i])
				str[i] = c[j];
		}
	}

	return (str);
}
