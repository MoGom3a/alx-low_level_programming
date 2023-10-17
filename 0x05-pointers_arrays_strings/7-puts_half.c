#include "main.h"

/**
 *puts_half - takes an array of int
 *
 *@str: pointer for the int
 *
 *Return: void
 */

void puts_half(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
		;
	l++;
	l = l / 2;
	while (str[l] != '\0')
	{
		_putchar(str[l]);
			l++;
	}
	_putchar('\n');
}
