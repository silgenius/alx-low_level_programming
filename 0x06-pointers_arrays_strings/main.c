#include "main.h"
#include <stdio.h>

int main(void)
{
	char *first = "5509";
	char *second = "9913";
	char r[8];
	char *res;

	if ((res = infinite_add(second, first, r, 8)) == 0)
	{
		printf("Error");
	}
	else
	{
		printf("%s + %s = %s\n", first, second, res);
	}

	return(0);
}
