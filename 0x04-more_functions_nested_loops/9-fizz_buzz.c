#include <stdio.h>

/**
 * main - Entry point
 * print numbers from 1 to 100
 * for multiples of three print Fizz
 * for multiples of five print Buzz
 * for multiples of both three and five print FizzBuzz
 *
 * Return: 0 Always (Sucess)
 */
int main(void)
{
	int n;

	for (n = 1; n  <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		printf("%d ", n);
	}
	printf("\n");

	return (0);
}
