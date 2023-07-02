#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: prints 10 times the alphabet, in lowercase 
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int line, ch;

	for(line = 0; line <= 9; line++)
	{
		for(ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
