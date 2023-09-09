#include <stdio.h>

/**
 * main -prints all possible combinations of two two-digit numbers
 *
 * Return: 0 Alaways
 */
int main(void)
{
	int box;
	int toy;
	int b;
	int t;

	for (box = 0; box < 10 ; box++)
	{
		for (toy = 0; toy < 10; toy++)
		{
			for (b = box ; b < 10; b++)
			{
				for (t = (toy + 1); t < 10; t++)
				{
					putchar('0' + box);
					putchar('0' + toy);
					putchar(' ');
					putchar('0' + b);
					putchar('0' + t);

					if ((box != 9 || b != 8) &&
					    (toy != 9 || t != 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
