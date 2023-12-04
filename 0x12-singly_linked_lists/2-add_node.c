#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *_new;
	size_t count = 0;

	_new = malloc(sizeof(list_t));
	if (_new == NULL)
		return (NULL);

	while (str[count])
		count++;

	_new->str = strdup(str);
	_new->len = count;
	_new->next = *head;
	*head = _new;

	return (*head);
}

