#include "main.h"
#include <stdio.h>

/**
 * main - Entry point command line
 * @argc: argument counter
 * @argv: array of character pointers pointing at command line arguments
 * printf - print all received arguments
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
