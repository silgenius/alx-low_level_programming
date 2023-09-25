#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Description: This function takes a pointer to the head of a linked list
 *              and prints the elements of the list along with their indexes.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t i;
	const listint_t *ptr;

	i = 0;
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n",ptr->n);
		ptr = ptr->next;
		i++;
	}

	return (i);
}
