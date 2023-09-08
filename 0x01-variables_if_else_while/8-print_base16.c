#include <stdio.h>

/**
 * main - Entry point
 *
 * print numbers of base16 0123456789abcdef , followed by a new line
 * use putchar only three times
 *
 * Return: 0 Always (success)
 *
 */
int main(void)
{
	int num = 0;
	char alpha = 'a';

	for (num = 0; num < 10; num++)
		putchar('0' + num);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');

	return (0);
}
