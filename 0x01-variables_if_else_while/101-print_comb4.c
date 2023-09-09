#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * separate by ',' digits must be different
 *
 * Return: 0 Alawys
 */
int main(void)
{
	int box;
	int toy;
	int a;

	for (box = 0; box < 10; box++)
	{
		for (toy = (box + 1); toy < 10; toy++)
		{
			for (a = (toy + 1); a < 10; a++)
			{
				putchar('0' + box);
				putchar('0' + toy);
				putchar('0' + a);

				if (box != 7 || toy != 8 || a != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
		putchar('\n');

	return (0);
}
