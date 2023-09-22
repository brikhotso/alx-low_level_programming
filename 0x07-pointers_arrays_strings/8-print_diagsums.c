#include <stdio.h>

/**
 * print_diagsums -  print sum of two diagonals of a square matrix of integers.
 * @a: pointer to square matrix of integers
 * @size: size of integers
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
