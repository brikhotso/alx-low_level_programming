#include "main.h"

/**
 * print_triangle - print a triangle
 * use # character to print triangle
 * @size: the size of a triangle
 * Return 0 Alaways (Success)
 */
void print_triangle(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (x = size; x > 0; x--)
		{
			for (y = 1; y <= size; y++)

				if (x <= y)
					_putchar('#');
				else
					_putchar(' ');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
