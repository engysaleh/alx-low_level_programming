#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: Prints the 9 times table, starting with 0
 *
 * Return: nothing
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 0 ; y <= 9 ; y++)
		{
			z = x * y;

			_putchar(z);
			_putchar(',');
			_putchar(' ');

			if (z <= 9)
				_putchar(' ');
			else
				_putchar((z / 10) + '0');
			_putchar((z % 10) + '0');
		}
		_putchar('\n');
	}
}
