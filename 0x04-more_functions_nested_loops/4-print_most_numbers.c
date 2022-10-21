#include <stdio.h>
#include "main.h"

void print_most_numbers(void)
{
	char ch = '0';
	for (ch = 0; ch <= 9; ch ++)
	{
		if (ch == '2' || ch == '9')
			continue;
		putchar(ch);
	}
	putchar('\n');
}
