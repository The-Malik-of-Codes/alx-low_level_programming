#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a  linked list.
 * @head: pointer to the first node in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporary = *head;
	listint_t *_current = NULL;
	size_t i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temporary);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temporary || !(temporary->next))
			return (-1);

		temporary = temporary->next;
		i++;
	}

	_current = temporary->next;
	temporary->next = _current->next;
	free(_current);

	return (1);
}

