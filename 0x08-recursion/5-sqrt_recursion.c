#include "main.h"

/**
 * _sqrt_recursion - return the square root of a number
 * @n: number to check for square root
 *
 * Return: square root else return -1 if number does not have
 */
int _sqrt_recursion(int n)
{

	int _sqrt_function(int n, int r);

	int r = 0;

	return (_sqrt_function(n, r));
}

/**
 * _sqrt_function - helper function for recursive calculation
 * @n: number to check for square root
 * @r: current guess for the square root
 *
 * Return: square root, or -1 if number does not have one
 */
int _sqrt_function(int n, int r)
{
	if (n < 0 || r * r > n)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	if (r * r == n)
		return (r);

	return (_sqrt_function(n, r + 1));
}
