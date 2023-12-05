#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int difference;
	listint_t *temporary;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			temporary = (*h)->next;
			free(*h);
			*h = temporary;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}

