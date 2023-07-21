#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; s++)
		i++;

	while (i--)
		{
			_putchar(s[i]);
			_putchar('\n');
		}
}
