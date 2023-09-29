#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from n to m.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Description: This function takes two unsigned long integers, 'n' and 'm',
 *              and returns the number of bits that need to be flipped in order
 *              to change 'n' into 'm'.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long xor_result, count;

	count = 0;
	xor_result = n ^ m;

	while (xor_result)
	{
		if ((xor_result & 1) == 1)
			count++;
		xor_result >>= 1;
	}

	return (count);
}
