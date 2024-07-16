#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 *                 using the Linear search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size:  The number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located
 *         -1 if the value is not present or if the array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	while (index < size)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
		index++;
	}

	return (-1);
}
