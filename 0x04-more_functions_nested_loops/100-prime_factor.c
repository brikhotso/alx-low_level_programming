#include <stdio.h>

/**
 * main - Entry point
 * find and prints the largest prime factor of the number 612852475143
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	long int f, n, lf;

	n = 612852475143;
	f = 3;
	lf = 0;

	while (n != 1)
	{
		if (n % f == 0)
		{
			n = n / f;
			if (f > lf)
				lf = f;
		}
		else
			f++;
	}
	printf("%ld\n", lf);

	return (0);
}
