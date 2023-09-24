#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all elements of a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Description: This function takes a pointer to the head of a linked list
 *              and prints the elements of the list along with their indexes.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	const list_t *current;
	size_t c;

	c = 0;
	current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}

		current = current->next;
		c++;
	}

	return (c);
}
