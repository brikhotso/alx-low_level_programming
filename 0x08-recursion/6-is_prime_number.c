#include "main.h"
/**
 * is_prime_number - check if an interger is a prime number
 * @n: integer to check
 *
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	int cal_prime(int n, int i);

	if (n <= 1)
	{
		return (0);
	}

	int i = 2;

	return (cal_prime(n, i));
}
/**
 * cal_prime - calculate prime number
 * @n: interger to check
 * @i: interger to help check n
 *
 * Return: integer to calculated prime
 */
int cal_prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}

	if (i <= 1 || i * i > n)
	{
		return (1);
	}
	return (cal_prime(n, i + 1));
}
