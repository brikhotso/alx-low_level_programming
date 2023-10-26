#include "main.h"

/**
 * set_bit - set value of a bit at given index
 * @index: index starting from 0
 * @n: pointer to value to set
 *
 * Return: 1 for value of bit , -1 error
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(n) * 8)
		return (-1);

	*n |= (1 << index);

	return (1);
}
