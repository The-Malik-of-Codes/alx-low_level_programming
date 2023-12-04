#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: The list_t list.
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t no_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		no_nodes++;
		h = h->next;
	}

	return (no_nodes);
}

