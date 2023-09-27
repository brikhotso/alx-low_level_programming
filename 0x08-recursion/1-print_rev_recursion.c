#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse with recursion
 * @s: string to print
 *
 * Return:  reversed string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
