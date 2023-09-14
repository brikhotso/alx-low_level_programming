#include "main.h"

/**
 * print_square - print a square
 * use # character to print square
 * @size: the size of a square
 * Return 0 Alaways (Success)
 */
void print_square(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)

				if (x <= size)
					_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
