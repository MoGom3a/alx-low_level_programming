#include "main.h"

/**
 *puts2 - takes an array of chars
 *
 *@str: store a pointer to the chars
 *
 *Return: N/A
 */

void puts2(char *str)
{
	int c = 0;

	while (str[c] != '\n')
	{
		if (c % 2 == 0)
			_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}	
