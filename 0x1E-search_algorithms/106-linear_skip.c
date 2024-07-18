#include "search_algos.h"


/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 *
 * @list: Pointer to the head of the skip list to search in
 * @value: The value to search for
 *
 * Return: Pointer to the first node where the value is located
 *         NULL if the value is not present or if the list is NULL
 *
 * Assumptions:
 * - The skip list is sorted in ascending order
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *ptr, *ptrPrev, *tmp;
	
	if (list == NULL)
		return (NULL);
	ptrPrev = list;
	ptr = list->express;
	
	while (ptr != NULL && ptr->express != NULL && ptr->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", ptr->index,  ptr->n);
		ptrPrev = ptr;
		ptr = ptr->express;
	}
	
	if (ptr != NULL)
		printf("Value checked at index [%ld] = [%d]\n", ptr->index,  ptr->n);
	
	if (ptr == NULL || ptr->n >= value)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", ptrPrev->index, ptr ? ptr->index : ptrPrev->index);
		
		while (ptrPrev != NULL && ptrPrev->index <= (ptr ? ptr->index : ptrPrev->index))
		{
			printf("Value checked at index [%ld] = [%d]\n", ptrPrev->index,  ptrPrev->n);
			if (ptrPrev->n == value)
				return (ptrPrev);
			ptrPrev = ptrPrev->next;
		}
	}
	else
	{
		tmp = ptr;
		ptrPrev = tmp;
		while (tmp->next != NULL)
			tmp = tmp->next;
		printf("Value found between indexes [%ld] and [%ld]\n", ptrPrev->index, tmp->index);
		
		while (ptr != NULL)
		{
			printf("Value checked at index [%ld] = [%d]\n", ptr->index,  ptr->n);
			if (ptr->n == value)
				return (ptr);
			ptr = ptr->next;
		}
	}
	return (NULL);
}

