#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 * Return: 0 Always (Success)
 */
void more_numbers(void)
{
	int count;
	int n;

	for (count = 0 ; count <= 9; count++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
	return (0);
}
