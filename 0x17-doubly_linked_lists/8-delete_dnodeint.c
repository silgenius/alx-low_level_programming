#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @index: The index of the node to be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev_node;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (i = 0; i < index && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL && i < index)
		return (-1);
	prev_node = temp->prev;
	prev_node->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = prev_node;

	free(temp);
	return (1);
}
