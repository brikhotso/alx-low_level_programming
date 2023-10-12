#include "variadic_functions.h"

/**
 * print_b_char - Prints a character
 * @arg: A va_list with character print
 */
void print_b_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_b_int - Prints an integer
 * @arg: A va_list with integer to print
 */
void print_b_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_b_float - Prints a float
 * @arg: A va_list A va_list with float to print
 */
void print_b_float(va_list arg)
{
	printf("%f", (float)va_arg(arg, double));
}

/**
 * print_b_string - Prints a string
 * @arg: A va_list containing the string to print
 */
void print_b_string(va_list arg)
{
	char *string = va_arg(arg, char *);

	if (string == NULL)
	{
		printf("(nil)");
	}
	printf("%s", string);
}

/**
 * print_all - print all types of arguments
 * @format: list of all types of arguments
 *
 * Return: printed arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;

	char *separator;
	int i = 0, j = 0, n = 4;
	char spec[] = {'c', 'i', 'f', 's'};

	void (*prints[])(va_list) = {print_b_char, print_b_int,
				 print_b_float, print_b_string};

	va_start(args, format);

	separator = "";

	while (format[i] != '\0' && format != NULL)
	{
		j = 0;

		while (j < n && format[i] != spec[j])
			j++;

		if (j < n)
		{
			printf("%s", separator);
			prints[j](args);
			separator = ", ";
		}

		i++;
	}

	va_end(args);
	printf("\n");
}
