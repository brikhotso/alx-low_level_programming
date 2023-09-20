#include "main.h"

/**
 * reverse_array - reverse content of array of integers
 * @a: pointer to a string
 * @n: number of elements of the array
 *
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = (n - 1); i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
