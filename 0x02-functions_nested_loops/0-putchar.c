#include "main.h"

/**
 * main - print _putchar ,followed by a new line
 *
 * Return: 0 Always
 */
int main(void)
{
	char name[] = "_putchar";
	int count;

	for (count = 0; count < 8; count++)
	{
		if (count == 0)
		{
			_putchar('_');
		}
		else
			_putchar(name[count]);
	}
	putchar('\n');

	return (0);
}
