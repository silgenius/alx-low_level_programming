#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
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
	size_t mid;
	(void) size;

	if (array == NULL)
		return (-1);
	while (right >= left)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] == value)
		{
			if (!(array[mid - 1] == value))
				return (mid);
		}
		if (array[mid - 1] == value)
			right = mid;
		else if(array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
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
