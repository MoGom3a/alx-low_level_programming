#include "main.h"

/**
 *_strncpy - function to concatinate 2 str
 *
 *@dest: the destination
 *@src: the source for input
 *@n: the n of bytes of src
 *
 * Return: Pointer to resulting str
 */

char *_strncpy(char *dest, char *src, int n)
{
	int src_len = 0, index = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
