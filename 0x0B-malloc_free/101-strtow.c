#include <stdlib.h>
#include "main.h"

/**
 * wordcount - count number of words in a string
 * @s: string
 *
 * Return: counted number of words
 */
int wordcount(char *s)
{
	int i;
	int count = 0;
	int in_word = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] != ' ' && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (s[i] == ' ')
		{
			in_word = 0;
		}
	}

	return (count);
}
/**
 * strtow - split a string into words
 * @str: string
 *
 * Return: pointer to arry of string, NULL if function fail
 */
char **strtow(char *str)
{
	int i = 0, j, k, l, count = 0, m = 0;
	char **word;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = wordcount(str);
	if (count == 1)
		return (NULL);

	word = malloc(count * sizeof(char *));
	if (word == NULL)
		return (NULL);
	word[count - 1] = NULL;

	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			word[m] = malloc(j * sizeof(char));
			j--;

			if (word[m] == NULL)
			{
				for (k = 0; k < m; k++)
					free(word[k]);
				free(word[count - 1]);
				free(word);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				word[m][l] = str[i + l];
			word[m][l] = '\0';
			i += j;
		}
		else
			i++;
	}
	return (word);
}
