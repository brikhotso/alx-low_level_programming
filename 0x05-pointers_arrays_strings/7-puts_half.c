#include "main.h"

/**
 * puts_half - prints half a string
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int a, n;

	for (a = 0; str[a] != '\0'; a++)
	{
		continue;
	}
	if (n / 2 == 0)
		n = a / 2;
	n = (a + 1) / 2;
	for (a = n; a >= 0; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
