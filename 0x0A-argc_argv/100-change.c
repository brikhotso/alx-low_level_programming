#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point command line
 * print the minimum number of coins to make change for an amount of money
 * @argc: argument counter
 * @argv: array of character pointers pointing at command line arguments
 *
 * Return: if number is a positve digit return 0 ,else return 1
 */
int main(int argc, char *argv[])
{
	int change, i, count = 0;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}
	change = atoi(argv[1]);

	if (change == '-')
	{
		printf("0\n");

		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (change >= coin[i])
		{
			change = change - coin[i];
			count++;
		}
	}

	printf("%d\n", count);

	return (0);
}
