#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size:  The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located
 *         -1 if the value is not present or if the array is NULL
 *
 * Assumptions:
 * - The array is sorted in ascending order
 */
int jump_search(int *array, size_t size, int value)
{
	size_t squareroot = floor(sqrt(size));
	size_t index, prev, i;

	index = 0;
	prev = 0;

	if (array == NULL)
		return (-1);

	while (1)
	{
		if (array[index] >= value || index > size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", prev, index);
			i = prev;
			while (i <= index)
			{
				if (i >= size)
					return (-1);

				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);

				if (i == index)
					return (-1);
				i++;
			}
		}
		else
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		prev = index;
		index += squareroot;
	}
}
