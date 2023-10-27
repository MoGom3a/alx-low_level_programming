#include "main.h"

/**
 *_puts - take an array of char values and points to it
 *
 *@str: char parameter
 *
 *Return: N/A
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
