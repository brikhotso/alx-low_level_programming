#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: given number
 *
 * Return: for n greater than 0 return factorial else return -1
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (-1);
	}
}
