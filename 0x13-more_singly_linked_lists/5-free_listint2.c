#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets the head pointer to NULL.
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Description: This function takes a pointer to a pointer to the head of a linked list.
 *              It frees all the nodes in the list and sets the head pointer to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *tmp;

	tmp = *head;
	while (tmp != NULL)
	{
		ptr = tmp-> next;
		free(tmp);
		tmp = ptr;
	}

	*head = NULL;
}
