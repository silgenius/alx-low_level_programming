#include "search_algos.h"

/**
 * interpolation_search - Perform interpolation search on an array of integers.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for within the array.
 *
 * Return: Index of the element if found, otherwise -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t probe;

	if (array == NULL)
		return (-1);

	probe = low + (((double)(high - low) /
				(array[high] - array[low])) *
				(value - array[low]));

	while (value >= array[low] && value <= array[high] && low <= high)
	{
		printf("Value checked array[%ld] = [%d]\n", probe, array[probe]);
		if (array[probe] == value)
			return (probe);

		else if (array[probe] < value)
			low = probe + 1;
		else
			high = probe - 1;
		probe = low + (((double)(high - low) /
				(array[high] - array[low])) *
				(value - array[low]));
	}

	if (probe > size)
		printf("Value checked array[%ld] is out of range\n", probe);
	return (-1);
}
