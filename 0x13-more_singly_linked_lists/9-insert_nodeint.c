#include "lists.h"
/**
 * insert_nodeint_at_index - nserts a new node at a given position.
 * @head: The head node
 * @idx: The index of the list where new node is to be added
 * @n: The integer data of the new node
 * Return: The address of the new inserted node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temporary = *head;
	size_t iterable = 0;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!*head && !idx)
	{
		*head = node;
		return (node);
	}

	else if (!*head && idx)
		return (NULL);

	else if (!idx)
	{
		node->next = temporary;
		*head = node;
		return (node);
	}

	while (iterable < (idx - 1))
	{
		temporary = temporary->next;
		iterable++;
	}
	node->next = temporary->next;
	temporary->next = node;

	return (node);
}

