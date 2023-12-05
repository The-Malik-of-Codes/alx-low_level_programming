#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *decelerate = head;
	listint_t *accelerate = head;

	if (!head)
		return (NULL);

	while (decelerate && accelerate && accelerate->next)
	{
		accelerate = accelerate->next->next;
		decelerate = decelerate->next;

		if (accelerate == decelerate)
		{
			decelerate = head;
			while (decelerate != accelerate)
			{
				decelerate = decelerate->next;
				accelerate = accelerate->next;
			}
			return (accelerate);
		}
	}
	return (NULL);
}

