#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list.
 * @head: pointer to the first node of the linked list
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int headdata;

	if (!head || !*head)
		return (0);

	headdata = (*head)->n;
	temporary = *head;
	*head = (*head)->next;
	free(temporary);

	return (headdata);
}

