#include "lists.h"

/**
 * print_listint - print ll
 * @h: first node
 *
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
