#include <stdio.h>

/**
 * main - Entry point
 *
 * print alphabet in lowercase, followed by a new line
 * use putchar only twice
 *
 * Return: 0 Always (success)
 *
 */
int main(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');

	return (0);
}
