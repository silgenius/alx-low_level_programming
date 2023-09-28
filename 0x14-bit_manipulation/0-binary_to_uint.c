#include "main.h"
#include <string.h>

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: A pointer to a string containing the binary representation.
 *
 * Description: This function takes a pointer to a string representing a binary
 *              number and converts it to an unsigned integer.
 *
 * Return: The converted unsigned integer. Returns 0 if 'b' is NULL or contains
 *         characters other than '0' and '1'.
 */
unsigned int binary_to_uint(const char *b)
{
	int index, cal;
	unsigned int result;

	index = strlen(b);
	index -= 1;
	result = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		cal = (1 << index) * (*b - '0');
		result += cal;
		index--;
		b++;
	}

	return (result);
}

