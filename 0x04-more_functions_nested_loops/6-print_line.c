#include "main.h"

/**
  * print_line - function that prints a straight line
  *
  * @n: number of times the character _ should be printed
  *
  * Return: nothing
  */

void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (n > 0)
			_putchar('_');
		else
			_putchar('\n');
	}
	_putchar('\n');
}
