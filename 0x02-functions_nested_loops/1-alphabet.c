#include "main.h"

/**
 * print_alphabet - function to print alphabet
 *
 * print all alphabets in lowercase, followed by a new line
 * use putchar only twice
 *
 * Return: 0 Always (success)
 *
 */
void print_alphabet(void);
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');

}
