#include "function_pointers.h"

/**
 * array_iterator -  a function that executes a function given as a
 * parameter on each element of an array.
 *
 * @array: array that contains element to be executed
 * @size: number of element in the array
 * @action: function to be executed on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(*array);
			array++;
		}
	}
}
