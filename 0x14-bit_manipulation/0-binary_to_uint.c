#include "main.h"

/**
 * binary_to_uint - convert binary number to unsigned integer
 * @b: string of 1s and 0s
 *
 * Return: converted number if char is 0 or 1,else NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len = 0;
	unsigned int pow2 = 1, decimal = 0;

	while (b[len] != '\0')
		len++;


	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
		{
			decimal = decimal + pow2;
		}
		pow2 = pow2 * 2;
	}
	return (decimal);
}
