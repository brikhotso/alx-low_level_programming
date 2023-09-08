#include <stdio.h>

/**
 * main - Entry point
 *
 * print all single digit numbers of base 10 from 0, followed by a new line
 *
 * Return:0 Always (Success)
 */
int main(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");

	return (0);
}
