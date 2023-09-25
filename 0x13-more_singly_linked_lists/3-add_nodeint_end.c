#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The integer value to be stored in the new node.
 *
 * Description: This function creates a new node with the specified integer
 * value and adds it at the end of the linked list.
 *
 * Return: A pointer to the newly created node,
 * or NULL if memory allocation fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *tmp;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	tmp = *head;

	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = ptr;

	return (*head);
}
