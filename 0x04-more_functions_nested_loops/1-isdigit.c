#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _isdigit - check the code.
 * @c: int c description
 *
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		c = 1;
	}
	else
	{
		c = 0;
	}

	return (c);
}
