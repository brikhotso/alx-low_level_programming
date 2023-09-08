#include <stdio.h>

/**
 * main - Entry point
 *
 * print all alphabets in lowercase, expect 'q' and 'e'
 * use putchar only twice
 *
 * Return: 0 Always (success)
 *
 */
int main(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
	putchar('\n');

	return (0);
}
