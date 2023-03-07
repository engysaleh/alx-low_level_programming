#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	char y;

	for (x = 0 ; x <= 9 ; x++)
		putchar(x + '0');
	for (y = 'a' ; y <= 'f' ; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
