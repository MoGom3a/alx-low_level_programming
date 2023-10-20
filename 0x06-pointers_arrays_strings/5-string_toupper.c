#include "main.h"

/**
 *string_toupper - function to concatinate 2 str
 * : The input string to be modified.
 * Return: Pointer to resulting str
 */

char *string_toupper(char *)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] = str[index] - 32;
	}
	return (str);
}
