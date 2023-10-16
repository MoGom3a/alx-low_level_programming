#include "stdio.h"

/**
 *_strlen - takes an array of char type and then points to it
 *
 *@s: pointer pararmeter for the array
 *
 *Return: the array length
 */

int _strlen(char *s)
{
	int leng;

	for (leng = 0; *s != '\0'; s++)
		++leng;

	return (leng);
}
