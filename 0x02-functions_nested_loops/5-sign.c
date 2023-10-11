#include "main.h"

/**
 *print_sign - entry point
 *Description: checks if the entry is alphabet
 *@n: the input of the func
 *Return: 0 (zero) & 1 (1 ot more) & -1 (less than zero)
 */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	if (c == 0)
	{
		_putchar(0);
		return (0);
	}
	else
		_putchar('-');
	return ("-1");
}
