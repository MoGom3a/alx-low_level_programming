#include "main.h"

/**
 *_isalpha - entry point
 *Description: checks if the entry is alphabet
 *@c: the input of the func
 *Return: 0 (alphabet) & 1 (otherwise)
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
