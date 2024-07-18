#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list of integers
 *             using the Jump search algorithm
 *
 * @list: Pointer to the head of the list to search in
 * @size: The number of elements in the list
 * @value: The value to search for
 *
 * Return: Pointer to the first node where the value is located
 *         NULL if the value is not present or if the list is NULL
 *
 * Assumptions:
 * - The list is sorted in ascending order
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = floor(sqrt(size));
	size_t index;
	listint_t *ptr, *ptrPrev;

	if (list == NULL)
		return (NULL);

	ptrPrev = find_node_by_index(list, list->index);
	index = ptrPrev->index + step;
	ptr = find_node_by_index(list, index);

	while (index < size && ptr->n < value)
	{
		printf("Value checked array[%ld] = [%d]\n", ptr->index, ptr->n);
		ptrPrev = ptr;
		index += step;
		if (index > size - 1)
		{
			index = size - 1;
			ptr = find_node_by_index(list, index);
			break;
		}
		ptr = find_node_by_index(list, index);
	}

	printf("Value checked array[%ld] = [%d]\n", index, ptr->n);
	printf("Value found between indexes [%ld] and [%ld]\n", ptrPrev->index, index);

	/* Perform linear search in the found block */
	while (ptr != NULL && ptrPrev != NULL && ptrPrev->index <= index)
	{
		 printf("Value checked array[%ld] = [%d]\n", ptrPrev->index, ptrPrev->n);
		 if (value == ptrPrev->n)
			 return (ptrPrev);
		 ptrPrev = ptrPrev->next;
	}

	return (NULL);

}

/**
 * find_node_by_value - Searches for a value in a sorted singly linked list of integers
 *
 * @list: Pointer to the head of the list to search in
 * @size: The number of elements in the list
 * @value: The value to search for
 *
 * Return: Pointer to the first node where the value is located
 *         NULL if the value is not present or if the list is NULL
 *
 * Assumptions:
 * - The list is sorted in ascending order
 */
listint_t *find_node_by_index(listint_t *list, size_t index)
{
	listint_t *ptr;

	ptr = list;
	while (ptr != NULL)
	{
		if (ptr->index == index)
			return (ptr);
		else
			ptr = ptr->next;
	}

	return (NULL);
}
