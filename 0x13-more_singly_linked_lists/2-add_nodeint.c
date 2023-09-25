#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The integer value to be stored in the new node.
 *
 * Description: This function creates a new node with the specified integer value
 *              and adds it at the beginning of the linked list.
 *
 * Return: A pointer to the newly created node, or NULL if memory allocation fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	else
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}

	return (*head);
}
