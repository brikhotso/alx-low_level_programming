#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point command line
 * @argc: argument counter
 * @argv: array of character pointers pointing at command line arguments
 * printf - print results of added numbers
 *
 * Return: if number is a positve digit return 0 ,else return 1
 */
int main(int argc, char *argv[])
{
	int num, i, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (i = 0; argv[num][i]; i++)
		{
			if (argv[num][i] < '\0' || argv[num][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum  += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
