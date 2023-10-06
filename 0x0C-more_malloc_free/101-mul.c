#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - check for a digit (0 through 9)
 * @s: string to check
 * Return: 1 if s is a digit and 0 if otherwise
 */
int _isdigit(char *s)
{
	int i = 0;

	while (s[i])
	{

		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns leghth of a string
 * @s: string
 *
 * Return: lenght of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * errors - handle errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

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
	char *s1, *s2;
	int len1, len2, len, carry, product, num1, num2, *mul, i, j;

	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
		errors();
	s1 = argv[1], s2 = argv[2];
	len1 = _strlen(s1), len2 = _strlen(s2);
	len = len1 + len2 + 1;
	mul = malloc(sizeof(int) * len);
	if (mul == NULL)
	{
		printf("Error\n");
		return (98);
	}
	for (i = 0; i < len; i++)
		mul[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		num1 = s1[len1] - '0', carry = 0;
		for (len2 = len2 - 1, j = len; len2 >= 0; len2--, j--)
		{
			num2 = s2[len2] - '0';
			product = num1 * num2 + mul[j] + carry;
			carry = product / 10;
			mul[j] = product % 10;
		}
		if (carry > 0)
			mul[len] += carry;
	}
	i = 0;
	while (mul[i] == 0 && i < len - 1)
		i++;
	while (i < len)
	{
		_putchar(mul[i] + '0');
		i++;
	}
	_putchar('\n');
	free(mul);
	return (0);
}
