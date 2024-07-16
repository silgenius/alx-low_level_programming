#include "search_algos.h"

/**
 * exponential_search - Perform exponential search on a sorted
 * array of integers.
 * @array: Pointer to the first element of the sorted array.
 * @size: Number of elements in the array.
 * @value: Value to search for within the array.
 *
 * Return: Index of the element if found, otherwise -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t index, prev;
	size_t i = 1;

	if (array == NULL)
	{
		return (-1);
	}

	if (array[0] == value)
		return (0);

	prev = 1;
	index = 1 << i;

	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	while (index < size && array[index] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		prev = index;
		i++;
		index = 1 << i;
	}

	if (index > size - 1)
		index = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", prev, index);

	/* Perform linear search in the found block and return value*/
	return (binary_search_range(array, prev, index, value));
}

/**
 * binary_search_range - Perform binary search on a sorted array within a
 * specified range.
 * @array: Pointer to the first element of the sorted array.
 * @left: Index of the left boundary of the search range.
 * @right: Index of the right boundary of the search range.
 * @value: Value to search for within the specified range of the array.
 *
 * Return: Index of the element if found, otherwise -1.
 */
int binary_search_range(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}

		if (value > array[mid])
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return (-1);
}

/**
 * print_array - Prints the elements of an array from a given index to
 *               an end index
 *
 * @array: Pointer to the first element of the array to print
 * @index: The starting index from which to print
 * @end:   The ending index up to which to print (inclusive)
 *
 * Description: This function prints the elements of the array from the
 *              starting index to the ending index, inclusive. The elements
 *              are printed separated by commas and spaces.
 */

void print_array(int *array, size_t index, size_t end)
{
	printf("Searching in array: ");
	while (index <= end)
	{
		printf("%d", array[index]);
		if (index < end)
			printf(", ");
		else
			printf("\n");
		index++;
	}
}
