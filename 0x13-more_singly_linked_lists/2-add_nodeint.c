#include "lists.h"
/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list.
 * @head: pointer to the first node in the list
 * @n: data to insert in the new node created
 * Return: he address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *_new;

	_new = malloc(sizeof(listint_t));

	if (!_new)
		return (NULL);

	_new->n = n;
	_new->next = *head;
	*head = _new;

	return (*head);
}

