#include <stdio.h>

/**
 * main - Entry point
 *
 * print all alphabets in lowercase in reverse, followed by a new line
 * use putchar only twice
 *
 * Return: 0 Always (success)
 *
 */
int main(void)
{
	char alpha = 'z';

	for (alpha = 'z'; 'a' <= alpha; alpha--)
		putchar(alpha);
	putchar('\n');

	return (0);
}
