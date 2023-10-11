#include "main.h"

/**
 *print_alphabet_x10 - entry point
 *Description: gives the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int i, lin;

	for (lin = 1; lin <= 10; lin++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
