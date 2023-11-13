#include "main.h"

/**
* _isupper - a function that checks for uppercase character.
* @c: char to be checked
* Return: 0 (success)
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
