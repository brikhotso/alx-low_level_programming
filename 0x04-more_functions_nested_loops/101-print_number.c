#include "main.h"

/**
 * print_number - print an integer
 * @n: integer to be printed
 * Return: 0 Always (Success)
 */
void print_number(int n)
{
	int N = n;

	if (n < 0)
	{
		_putchar('-');
		N = -N;
	}
	else
	{
		N = N;
	}
	if (N / 10)
		print_number(N / 10);

	_putchar((N % 10) + '0');
}
