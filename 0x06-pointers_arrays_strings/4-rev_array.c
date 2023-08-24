#include "main.h"

/**
 * reverse_array -  a function that prints a string, in reverse.
 * 
 * @a: str
 * @n: size of array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, temp;
	
	temp = 0;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i -1];
		a[n - i -1] = temp;
	}
}

