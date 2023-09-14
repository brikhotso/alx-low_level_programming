#include "main.h"

/**
 * print_line - draw a straigt line
 * @n: number of time character can be printed
 *
 * Return: 0 always (Success)
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
			_putchar('_');
	}
	_putchar('\n');
}
