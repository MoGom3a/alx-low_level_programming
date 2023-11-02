#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);
	while (size--)
		str[size] = c;
	return (str);
}
