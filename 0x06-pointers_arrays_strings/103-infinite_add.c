#include "main.h"
#include <string.h>
#include <stdio.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1), len2 = strlen(n2);
	int digit1, digit2, j, i, sum, carry;

	if (size_r < len1 + 1 || size_r < len2 + 1)
		return (0);

	carry = 0;
	r[size_r] = '\0';
	size_r--;

	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
	{
		digit1 = n1[i] - '0';
		digit2 = n2[j] - '0';

		if (i < 0 || j < 0)
			(i < 0) ? (digit1 = 0) : (digit2 = 0);

		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		sum %= 10;

		r[size_r] = sum + '0';
		size_r--;
	}
	if (carry)
	{
		if (!(size_r >= 1))
			return (0);
		carry += '0';
		r[size_r] = carry;
		return (&(r[size_r]));
	}

	return (&(r[size_r + 1]));
}


