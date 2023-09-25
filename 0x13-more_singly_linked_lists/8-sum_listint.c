#include "lists.h"

/**
 * sum_listint - Calculates the sum of all integers in a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Description: This function takes a pointer to the head of a linked list and
 *              calculates the sum of all the integer values in the list.
 *
 * Return: The sum of all the integers in the linked list.
 * If the list is empty, it returns 0.
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int result;

	result = 0;

	if (head == NULL)
		return (0);
	ptr = head;

	while (ptr != NULL)
	{
		result += ptr->n;
		ptr = ptr->next;
	}

	return (result);
}
