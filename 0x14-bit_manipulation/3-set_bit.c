#include "main.h"

/**
 * set_bit - Sets the value of a bit at a specified index.
 * @n: A pointer to the unsigned long integer.
 * @index: The index of the bit to set (starting from 0).
 *
 * Description: This function takes a pointer to an unsigned long integer 'n'
 *              and an index. It sets the value of the bit at that index to 1.
 *
 * Return: 1 if the operation is successful, or -1 if an error occurs (e.g., if
 *         'index' is out of range).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	(n >> index) | 1;
