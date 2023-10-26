#include "main.h"

/**
 * print_binary - print a binary representation of a unsigned long integer
 * @n: number so print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	_putchar((n & 1) + '0');
}
