#include "main.h"

/**
 * rev_string - print string in reverse
 * @s: string
 *
 * Return: string in reverse
 */
void rev_string(char *s)
{
	int i, b;
	char rev = s[0];

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	for (b = 0; b < i; b--)
	{
		b--;
		rev = s[b];
		s[b] = s[a];
		s[a] = rev;
	}
}
