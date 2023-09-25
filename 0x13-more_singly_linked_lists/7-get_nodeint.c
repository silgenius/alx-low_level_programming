#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves a node at a specified index.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node to retrieve (starting from 0).
 *
 * Description: This function takes a pointer to the head of a linked list and
 *              an index, and returns a pointer to the node at that index.
 *
 * Return: A pointer to the node at the specified index, or NULL if the index
 *         is out of range or if the linked list is empty.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *get_node;
	listint_t *ptr;
	unsigned int i;

	i = 0;
	if (head == NULL)
		return (NULL);
	ptr = head;

	while (ptr != NULL && i <= index)
	{
		get_node = ptr;
		ptr = ptr->next;
		i++;
	}

	return (get_node);
}
