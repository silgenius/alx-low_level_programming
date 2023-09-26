#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets the head pointer to NULL.
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Description: This function takes a pointer to a pointer to the head of a
 * linked list frees all the nodes in the list
 * and sets the head pointer to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}

	*head = NULL;
}
