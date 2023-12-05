#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data in a linked list
 * @head: pointer to the first node in the linked list
 * Return: sum of element data in the linked list
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *temporary = head;

	while (temporary)
	{
		total += temporary->n;
		temporary = temporary->next;
	}

	return (total);
}

