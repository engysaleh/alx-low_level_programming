#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print a-z in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;
	
	for (x = 'z' ; x >= 'a' ; x--);
		puchar(x);	
	putchar('\n');
	return (0);
}
