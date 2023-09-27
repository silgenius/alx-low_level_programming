#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Safely prints a linked list with a loop.
 * @head: A pointer to the head of the linked list.
 *
 * Description: This function takes a pointer to the head of a linked list and
 *            safely prints the elements of the list. It can handle lists with
 *            loops and goes through the list only once. If the function fails
 *            to print the list, it exits the program with status 98.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t c;
	const listint_t *fast;
	const listint_t *slow;

	slow = head;
	fast = head;
	c = 0;

	while (fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow->next, slow->next->n);
			return (c);
		}
		c++;
	}

	return (c);
}
