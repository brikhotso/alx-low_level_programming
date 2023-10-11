#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -perform simple calculation
 * @argc: number of passed arguments
 * @argv: pointer to array of passed argument strings
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (op[1] != '\0' || get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((num2 == 0 && *op == '%') || (num2 == 0 && *op == '/'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
