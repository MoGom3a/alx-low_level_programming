#include "main.h"

/**
 *main - entry point
 *Description: gives the alphabet in lowercase
 *Return: 0 (success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
