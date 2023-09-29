#include "main.h"
#include <stdio.h>

/**
 * main - Entry point command line
 * @argc: argument counter
 * @argv: array of character pointers pointing at command line arguments
 * printf - print name of file
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);

	return (0);
}
