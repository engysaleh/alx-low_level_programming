#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0-9 using putchar
 *              while using int variable
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
		putchar(x + '0');
	putchar('\n');
	return (0);
}
