#include "main.h"

/**
* Description: prints the alphabet in lowercase
*
* Return: void
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
