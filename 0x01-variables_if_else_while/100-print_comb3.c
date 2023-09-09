#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * separate by ',' digits must be different
 *
 * Return: 0 Alawys
 */
int main(void)
{
	int box;
	int toy;

	for (box = 0; box < 10; box++)
	{
		for (toy = (box + 1); toy < 10; toy++)
		{
			putchar('0' + box);
			putchar('0' + toy);

			if (box != 8 || toy != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
