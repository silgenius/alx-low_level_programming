#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Description: This function checks whether the system is little-endian or big-endian.
 *
 * Return: 0 if the system is big-endian, 1 if it is little-endian.
 */
int get_endianness(void)
{
	 char *endian_check;
	 int num;

	 num = 1;
	 endian_check = (char *)&num;

	 return (*endian_check);
}
