#include "main.h"

/**
 * _islower - function check for lower character
 *
 * @c: character to to check
 *
 * Return: 1 if c is lowercase, else return 0 if false
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
