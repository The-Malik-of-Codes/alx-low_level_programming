#include "lists.h"
/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *_new, *temporary;
	size_t no_char = 0;

	_new = malloc(sizeof(list_t));

	if (_new == NULL)
		return (NULL);

	_new->str = strdup(str);

	while (str[no_char])
		no_char++;

	_new->len = no_char;
	_new->next = NULL;
	temporary = *head;

	if (temporary == NULL)
		*head = _new;

	else
	{
		while (temporary->next != NULL)
		temporary = temporary->next;
		temporary->next = _new;
	}

	return (*head);
}

