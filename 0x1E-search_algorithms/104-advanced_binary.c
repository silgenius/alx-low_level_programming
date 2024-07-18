#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
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
 * - The value does not appear more than once in the array
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t right = size - 1;
	size_t left = 0;
	(void) size;

	if (array == NULL)
		return (-1);

	return (binary_search_recursion(array, left, right, value));
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

/**
 * binary_search_recursion - Searches for a value in a sorted array of integers
 *                           using the Binary search algorithm with recursion
 *
 * @array: Pointer to the first element of the array to search in
 * @low:   The starting index of the subarray to search
 * @high:  The ending index of the subarray to search
 * @value: The value to search for
 *
 * Return: The index where the value is located
 *         -1 if the value is not present or if the array is NULL
 *
 * Assumptions:
 * - The array is sorted in ascending order
 * - The value does not appear more than once in the array
 */
int binary_search_recursion(int *array, size_t low, size_t high, int value)
{
	size_t mid = low + (high - low) / 2;


	if (low <= high)
	{
		print_array(array, low, high);

		if (array[mid] == value)
		{
			if (!(array[mid - 1] == value))
				return (mid);
		}

		if (array[mid - 1] == value)
			return (binary_search_recursion(array, low, mid, value));
		else if (array[mid] > value)
			return (binary_search_recursion(array, low, mid - 1, value));
		else
			return (binary_search_recursion(array, mid + 1, high, value));
	}

	return (-1);
}
