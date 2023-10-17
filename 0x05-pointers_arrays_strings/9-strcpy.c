#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - check the array
 *
 *@src: the pointer
 *
 *@dest: the destination of copy
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] >= '\0'; i++)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
