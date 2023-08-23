#include "main.h"
#include <string.h>

/**
 * _atoi -  a function that convert a string to an integer.
 * @s: char
 * Return: int (result)
 */
int _atoi(char *s)
{
	double result = 0;
	int sign = 1;
	int j = 0;
	int len = strlen(s);

	while (j < len)
	{
		if (s[j] >= '0' && s[j] <= '9')
		{
			result = result * 10 + (s[j] - '0');
			if (!(s[j + 1] >= '0' && s[j + 1] <= '9'))
				j = len; /* break out of the loop if next str is not an int*/
		}
		else if (s[j] == '-')
			sign *= -1;
		else if (s[j] == '+')
			sign *= 1;
		j++;
	}
	result *= sign;
	return (result);
}
