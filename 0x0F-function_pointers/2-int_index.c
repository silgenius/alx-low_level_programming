#include "function_pointers.h"

/**
 * int_index -  a function that searches for an integer.
 *
 * @array: array containing element to be searched
 * @size: number of element in the array
 * @cmp: a pointer to the function to be used to compare values
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		i = 0;
		while (i < size)
		{
			if (cmp(*array) != 0)
				return (i);
			i++;
			array++;
		}
	}
	return (-1);
}
