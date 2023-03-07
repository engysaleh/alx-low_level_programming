#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int x, y, z;

	for (x = 0 ; x < 10 ; x++)
	{
		for (y = 1 ; y < 10 ; y++)
		{
			for (z = 2 ; z < 10 ; z++)
			{
				if (x < y && y < z)
				{
				putchar(x + '0')
				putchar(y + '0')
				putchar(z + '0')
					if (x + y + z != 24)
					{
					putchar(' ')
					putchar(',')
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
