#include "lists.h"

/**
 * pop_listint - Removes and returns the head node of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Description: This function takes a pointer to the head of a linked list,
 *              removes the head node, and returns its value.
 *
 * Return: The value stored in the removed head node. If the linked list is
 *         empty, it returns 0.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	data = (*head)->n;
	temp = (*head)->next;

	free(*head);

	*head = temp;

	return (data);
}
