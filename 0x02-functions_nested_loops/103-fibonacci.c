#include <stdio.h>

/**
 * main - Entry point
 *
 * finds and prints the sum of the even-valued terms
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int counter = 0;
	long int a = 1;
	long int b = a;
	long int c = a + b;

	while (c < 4000000)
	{
		if (c % 2 == 0)
		{
			counter += c;
		}
		a = b;
		b = c;
		c = a + b;
	}
	printf("%lf\n", counter);
	return (0);
}