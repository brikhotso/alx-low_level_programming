#include "main.h"

/**
 * get_endianness - the the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *prt = (char *)&x;

	if (prt[0] == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
