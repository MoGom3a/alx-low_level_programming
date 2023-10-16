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
	int i = 0, l;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}
	for (l = 0; l < i / 2; l++)
	{
		tmp = s[l];
		s[l] = s[i - 1 - l];
		s[i - 1 - l] = tmp;
	}
}
