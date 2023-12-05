#include "lists.h"
/**
 * print_listint_safe - prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temporary_node = NULL;
	const listint_t *l_n = NULL;
	size_t count = 0;
	size_t new_node;

	temporary_node = head;
	while (temporary_node)
	{
		printf("[%p] %d\n", (void *)temporary_node, temporary_node->n);
		count++;
		temporary_node = temporary_node->next;
		l_n = head;
		new_node = 0;
		while (new_node < count)
		{
			if (temporary_node == l_n)
			{
				printf("-> [%p] %d\n", (void *)temporary_node, temporary_node->n);
				return (count);
			}
			l_n = l_n->next;
			new_node++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}

