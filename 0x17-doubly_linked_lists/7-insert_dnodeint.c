#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the doubly linked list.
 * @idx: The index where the new node should be added. Index starts at 0.
 * @n: The value to be assigned to the new node.
 *
 * Return: Pointer to the newly added node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *ptr = *h;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = ptr;
		if (ptr != NULL)
			ptr->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	for (i = 0; i < idx - 1 && ptr != NULL; i++)
		ptr = ptr->next;

	if (ptr == NULL && i < idx - 1)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = ptr->next;
	new_node->prev = ptr;
	if (ptr->next != NULL)
		ptr->next->prev = new_node;
	ptr->next = new_node;
	return (new_node);
}
