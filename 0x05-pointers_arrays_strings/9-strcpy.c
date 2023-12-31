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
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
