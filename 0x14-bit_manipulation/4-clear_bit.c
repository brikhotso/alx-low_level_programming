#include "main.h"

/**
 * clear_bit - clear value of a bit at given index
 * @index: index starting from 0
 * @n: pointer to value to clear
 *
 * Return: 1 for value of bit , -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(n) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
