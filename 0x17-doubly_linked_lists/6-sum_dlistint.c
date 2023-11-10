#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: The sum of all the data, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int result = 0;

	if (head == NULL)
		return (result);

	ptr = head;
	while (ptr != NULL)
	{
		result += ptr->n;
		ptr = ptr->next;
	}

	return (result);
}
