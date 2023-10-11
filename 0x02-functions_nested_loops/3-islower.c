#include "main.h"

/**
 *_islower - entry point
 *Description: checks if the alphabet in lowercase
 *@c: the input of the func
 *Return: 0 (lowercase) & 1 (otherwise)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return(0)
}
