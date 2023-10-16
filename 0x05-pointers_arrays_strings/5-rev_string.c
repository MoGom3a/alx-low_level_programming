#include "main.h"
#include <stdio.h>

/**
 *rev_string - take an array of char
 *
 *@s: pionter for the char
 *
 *Return: void
 */

void rev_string(char *s)
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
}
