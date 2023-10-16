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
		if (c == 0)
			_putchar(*str);
		
		else if (c % 2 != 0)
			continue;
		
		else
			_putchar(*str);
		
		c++;
	}
}	
