#include "main.h"
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_n1, len_n2, k, carry, sum;
	len_n1 = strlen(n1);
	len_n2 = strlen(n2);
	carry = 0;

	if (len1 + len_n2 > size_r)
		return (0);
	for (i = len_n1, j = len_n2; j >= 0 && i >= 0; i--, j--)
	{
		int digit1 = n1[i] - '0';
		int digit2 = n2[j] - '0';

		sum = (carry + digit1 + digit2) % 10;
		carry = (digit1 + digit2) / 10;
		r[i] = sum + '0';
		k++;
	}
	if (carry)
	{
		if (len_n1 + len_n2 + 1 > size_r)
			return 0;
		for (i = k; i >= 0; i--)
		{
			r[i] = r[i - 1];
		}
		r[i] = carry + '0';
	}
	return (r);
}
