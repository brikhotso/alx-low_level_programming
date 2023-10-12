#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: string printed between numbers
 * @n: numbers of intergers passed as arguments
 *
 * Return: printed numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int number;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(args, int);
		printf("%d", number);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
