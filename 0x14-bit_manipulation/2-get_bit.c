#include "main.h"

/**
 * get_bit - Gets the value of a bit at a specified index.
 * @n: The unsigned long integer.
 * @index: The index of the bit to retrieve (starting from 0).
 *
 * Description: This function takes an unsigned long integer 'n' and an index,
 *              and returns the value of the bit at that index.
 *
 * Return: The value of the bit at index 'index'.
 * Returns -1 if an error occurs,
 * such as if 'index' is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
