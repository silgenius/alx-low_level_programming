#include "main.h"

/**
* reverse_array - reverse an array
* @a: array list
* @n: number of char in an array
*
* Return: noting
*/

void reverse_array(int *a, int n)
{
	int temp;
	for (int i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - i - 1] = temp;
	}
	for (int i = 0; i < n; i++)
		printf("%d,", a[i]);
}
