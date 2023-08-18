#include "main.h"

/**
* _isdigit - a function that checks for a digit.
* @c: char to be checked
* Return: 0 (success)
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
