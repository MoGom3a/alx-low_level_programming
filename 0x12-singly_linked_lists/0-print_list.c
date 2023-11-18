#include "lists.h"

/**
 * _strlen - prints all the elements of a linked list
 * @s: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("[%d] %s\n", h->len, h->str ? h->str : "(nil)");
		h = h->next;
		x++;
	}
	return (x);
}
