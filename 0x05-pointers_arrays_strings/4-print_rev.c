#include "main.h"

/**
 *print_rev - Takes an array of char type and then points to it
 *
 *@s: point to the chars in the array
 *
 *Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (*s++)
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
