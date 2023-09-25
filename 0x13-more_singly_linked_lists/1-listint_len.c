#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Description: This function takes a pointer to the head of a linked list
 *              and counts the number of nodes in the list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	int count;

	ptr = h;
	count = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}

	return (count);
}
