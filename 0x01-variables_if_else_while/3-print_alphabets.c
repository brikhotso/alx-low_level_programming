#include <stdio.h>

/**
 * main - Entry point
 *
 * print alphabet in lowercase,uppercase, followed by a new line
 * use putchar only three times
 *
 * Return: 0 Always (success)
 *
 */
int main(void)
{
	char alpha = 'a';
	char ALPHA = 'A';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (ALPHA = 'A'; ALPHA <= 'Z'; ALPHA++)
		putchar(ALPHA);
	putchar('\n');

	return (0);
}
