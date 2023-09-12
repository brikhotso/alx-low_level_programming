#include "main.h"

/**
 * _isalpha - function check for alphabet characters
 *
 * @c: character to check
 *
 * Return: 1 if c is an alphabet, else return 0 if false
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
