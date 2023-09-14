#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: is the number of times the character \ should be printed
 *
 * Return 0 Alaways (Success)
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)

				if (y < x)
					_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
