#include "main.h"

/**
 * puts_half - prints half a string
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int a;
	int n;

	for (a = 0; str[a] != '\0'; a++)
	{
		continue;
	}
	n = a / 2;
	if (a % 2)
	n += 1;
	for (a = n; a >= 0; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
