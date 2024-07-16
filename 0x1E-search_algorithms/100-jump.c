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
	size_t step = floor(sqrt(size));
	size_t prev = 0;
	size_t index = step;
	size_t i;

	if (array == NULL)
	{
		return -1;
	}

	/* Find the block where the value may be present */
	while (index < size && array[index] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		prev = index;
		index += step;
	}
	
	printf("Value found between indexes [%ld] and [%ld]\n", prev, index);
	
	/* Perform linear search in the found block */
	for (i = prev; i < size && i <= index; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return i;
		}
	}
	
	return -1;
}
