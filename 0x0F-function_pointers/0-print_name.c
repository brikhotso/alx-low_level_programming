#include "function_pointers.h"

/**
 * print_name -prints a name
 * @name: Name to print
 * @f: pointer to void function taking char as argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
