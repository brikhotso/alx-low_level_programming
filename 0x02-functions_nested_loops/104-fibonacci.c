#include <stdio.h>

/**
 * main -Entry point
 *
 * finds and prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 *Return: 0 Always (Success)
 */
int main(void)
{
	int n = 98;
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long c;
	int i;

	printf("%lu, %lu", a, b);

	for (i = 2; i < n; i++)
	{
		if (i % 5 == 0)
			printf("\n");
		c = a + b;

		printf(", %lu", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
