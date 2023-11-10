#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: The index of the node, starting from 0.
 *
 * Return: Pointer to the nth node, or NULL if it does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i = 0;

	ptr = head;
	while (ptr != NULL)
	{
		if (i == index)
			break;
		ptr = ptr->next;
		i++;
	}

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
