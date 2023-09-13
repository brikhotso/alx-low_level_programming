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
	int a = 1;
	int b = 2;
	int i;

	printf("%d, %d", a, b);

	for (i = 2; i < n; i++)
	{
		int c = a + b;

		printf(", %d", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
