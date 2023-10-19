#include "main.h"

/**
 *_strcat - function to concatinate 2 str
 *
 *@dest: the destination
 *@src: the source for input
 *@n: the n of bytes of src
 *
 * Return: Pointer to resulting str
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + 1] = '\0';
	return (dest);
}
