#include <stdio.h>

/**
 * main - Entry point
 *
 * prints all single digit numbers of base 10 from 0, followed by a new line.
 * use int variable and put function
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
		putchar('0' + num);
	putchar('\n');

	return (0);
}
