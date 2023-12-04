#include "lists.h"
/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */
void free_list(list_t *head)
{
	list_t *_current;

	while ((_current = head) != NULL)
	{
		head = head->next;
		free(_current->str);
		free(_current);
	}
}

