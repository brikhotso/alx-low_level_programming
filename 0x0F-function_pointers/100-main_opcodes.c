#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - print opcodes
 * @s: pointer
 * @n: number of bytes
 *
 * Return: void
 */
void print_opcodes(char *s, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%.2hhx", s[i]);

		if (i < n - 1)
			printf(" ");
		i++;
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its own main function
 * @argc: number of passed arguments
 * @argv: pointer to array of passed arguments
 *
 * Return: 0
 */
int main(char argc, int *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);

	return (0);
}
