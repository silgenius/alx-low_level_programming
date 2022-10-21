#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _isupper - check the code.
 * @c: int c description
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return (0);
}
