#include "main.h"

/**
 * print_alphabet_x10 - fuction print alphabets 10 times
 *
 * print alphabels 10 times in lowercase, followed by new line
 *
 * Return: 0 Always (Success)
 */
void print_alphabet_x10(void)
{
	char c;
	int count = 0;

	while (count < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

		count++;
	}
}
