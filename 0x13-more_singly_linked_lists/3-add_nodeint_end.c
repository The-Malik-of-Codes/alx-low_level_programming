#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in the new node created
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *_new;
	listint_t *temporary = *head;

	_new = malloc(sizeof(listint_t));

	if (!_new)
		return (NULL);

	_new->n = n;
	_new->next = NULL;

	if (*head == NULL)
	{
		*head = _new;
		return (*head);
	}

	while (temporary->next)
		temporary = temporary->next;

	temporary->next = _new;
	return (*head);
}

