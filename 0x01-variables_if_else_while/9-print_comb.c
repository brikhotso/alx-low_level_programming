#include <stdio.h>

/**
 * main -Entry point
 *
 * print all combinations of single digit number
 * once last digit is reached continue (back at the beggining of the loop)
 * insert ',' followed by space
 *
 * Return: 0 Alaways (Success)
 */
int main(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
