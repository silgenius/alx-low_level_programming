#include"lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Description: This function takes a pointer to the head of a linked list and
 *              frees all the nodes in the list.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
