#include "main.h"

/**
 *_strcat - function to concatinate 2 str
 *
 *@dest: the destination
 *@src: the source for input
 *
 * Return: Pointer to resulting str
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;

	while (dest[c])
		c++;

	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];

	return (dest);
}
