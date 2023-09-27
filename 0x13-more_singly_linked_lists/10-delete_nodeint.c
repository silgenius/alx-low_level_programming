#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a specified index.
 * @head: A pointer to a pointer to the head of the linked list.
 * @index: The index of the node to be deleted.
 *
 * Description: This function takes a pointer to the head of a linked list and
 * an index. It deletes the node at the specified index and updates
 * the pointers accordingly.
 *
 * Return: 1 if the node is successfully deleted, -1 if the index is out of
 * range or -1 if there was an error during deletion.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *ptr;

	i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	ptr = *head;

	while (ptr && i < (index - 1))
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr == NULL || ptr->next == NULL)
		return (-1);

	temp = ptr->next;
	ptr->next = temp->next;

	free(temp);

	return (1);
}
