#include "main.h"

/**
 * get_bit - return value of a bit at given index
 * @index: index starting from 0
 * @n: number to check
 *
 * Return: value of bit , -1 error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index >= sizeof(n) * 8)
		return (-1);

	value = n & (1 << index);

	if (value > 0)
		return (1);
	else
		return (0);
}
