#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: checks for 'c' lowercase character
 *
 * Return: returns 1 if 'c' is lowercase otherwise always 0 (Success)
 */

int _islower(int c)
{
	char c;
	
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
