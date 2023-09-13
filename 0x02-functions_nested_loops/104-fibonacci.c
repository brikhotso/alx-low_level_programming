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
	int counter = 2;
	float a = 1;
	float b = a + 1;
	float c = a + b;

	printf("%.0f, ", a);
	printf("%.0f, ", b);
	while (counter < 98)
	{
		counter++;
		printf("%0.f", c);
		a = b;
		b = c;
		c = a + b;
		if (counter < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
