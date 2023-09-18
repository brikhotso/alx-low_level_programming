#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: string
 *
 * Return: 0 always (success)
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a = a + 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
