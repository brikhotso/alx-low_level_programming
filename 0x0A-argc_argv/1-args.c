#include "main.h"
#include <stdio.h>

/**
 * main - Entry point command line
 * @argc: argument counter
 * @argv: array of character pointers pointing at command line arguments
 * printf - print number of passed arguments
 *
 * Return: 0 always
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

			return (0);
}
