#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Description: This function takes a pointer to the head of a linked list,
 *              reverses the order of the nodes, and returns a pointer to the
 *              new head of the reversed list.
 *
 * Return: A pointer to the new head of the reversed linked list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next;

	prev = NULL;
	next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
