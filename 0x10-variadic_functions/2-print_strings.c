#include "variadic_functions.h"

/**
 * print_strings - strings
 * @separator: string printed between strings
 * @n: numbers of intergers passed as arguments
 *
 * Return: printed strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);

		if (string != NULL)
		{
			printf("%s", string);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
