#include "main.h"

/**
 *_strcmp - function to concatinate 2 str
 *
 *@s1: the destination
 *@s2: the source for input
 *
 * Return: Pointer to resulting str
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
