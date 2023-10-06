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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
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
	int num1, num2, *mul, len1, len2, len,  i, j = 0, n;
	char *s1, *s2;

	s1 = argv[1], s2 = argv[2];

	if (argc != 3 || !_isdigit(s1) || !_isdigit(s2))
	    errors();
	len1 = _strlen(s1), len2 = _strlen(s2);
	len = len1 + len2 + 1;
	mul = malloc(sizeof(int) * len);
	if (!mul)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		mul[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		num1 = s1[len1] - '0';
		n = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			num2 = s2[len2] - '0';
			n += mul[len1 + len2 + 1] + (num1 * num2);
			mul[len1 + len2 + 1] = n % 10;
			n /= 10;
		}
		if (n > 0)
			mul[len1 + len2 + 1] += n;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (mul[i])
			j = 1;
		if (j)
			_putchar(mul[i] + '0');
	}
	if (!j)
		_putchar('0');
	_putchar('\n');
	free(mul);
	return (0);
}
