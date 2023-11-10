#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the doubly linked list.
 * @idx: The index where the new node should be added. Index starts at 0.
 * @n: The value to be assigned to the new node.
 *
 * Return: Pointer to the newly added node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *ptr;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	 new_node->n = n;
	 if (*h == NULL && idx > 0)
	 {
		 free(new_node);
		 return (NULL);
	 }
	
	 if (idx == 0)
	 {
       		 new_node->prev = NULL;
		 new_node->next = *h;
		 if (*h != NULL)
			 (*h)->prev = new_node;
		 *h = new_node;
		 return (new_node);
	 }
	 
	 ptr = *h;
	 for (i = 0; i < idx - 1 && ptr != NULL; i++)
		 ptr = ptr->next;
	 if (ptr == NULL)
	 {
		 free(new_node);
		 return (NULL);
	 }

	 new_node->prev = ptr;
	 new_node->next = ptr->next;
	 
	 if (ptr->next != NULL)
		 ptr->next->prev = new_node;
	 
	 ptr->next = new_node;
	 
	 return (new_node);
}
