#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenate all arguments of a program
 * @ac: number of passed arguments
 * @av: pointer to array of passed argument strings
 *
 * Return: pointer to new string, NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k;
	int count;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; count = 0, i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, count++)
			count++;
	}

	str = malloc((count * sizeof(char));

	if (str == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}

		str[k] = '\n';
		k++;
	}

	str[k] = '\0';

	return (str);
}
