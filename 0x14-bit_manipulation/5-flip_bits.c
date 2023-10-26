#include "main.h"

/**
 * flip_bits - flip value of a bit to get from one number to onother
 * @n: first number to flip
 * @m: second number
 *
 * Return: number of flips , -1 error
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count = 0;

	result = n ^ m;

	while (result > 0)
	{
		if (result & 1)
		{
			count++;
		}
		result = result >> 1;
	}
	return (count);
}
