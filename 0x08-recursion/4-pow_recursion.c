#include "main.h"

/**
 * _pow_recursion - return the value of x raised to the power y
 * @x: base number
 * @y: power number
 *
 * Return: value of x to the power y, for y less than 0 return -1
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (-1);
	}
}
