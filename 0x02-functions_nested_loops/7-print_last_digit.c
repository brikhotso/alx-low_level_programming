#include "main.h"

/**
 * print_last_digit - print last digit of a number
 *
 * @n: integer to check
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = (last * -1);
	}
	putchar(last + '0');

	return (last);
}
