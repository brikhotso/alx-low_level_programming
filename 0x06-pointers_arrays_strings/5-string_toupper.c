#include "main.h"

/**
 * string_toupper - change all lowercase letters to uppercase
 * @str: string to change
 *
 * Return: pointer to changed string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}

	return (str);
}
