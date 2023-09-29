#include "main.h"
#include <stdio.h>

/**
 * main - Entry point command line
 * @argc: argument counter
 * @argv: array of character pointers pointing at command line arguments
 * printf - print results of two multiples
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int _atoi(char *s);
	int num1 = _atoi(argv[1]);
	int num2 = _atoi(argv[2]);

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	printf("%d\n", num1 * num2);

	return (0);
}
/**
 * _atoi - convert a string to an integer
 * @s: string
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int a = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			a *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * a);
}
