#include <stdio.h>

int main(void)
{
	char i;
	int m;
	long n;
	long long int o;
	float p;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(m));
	printf("Size of a long: %lu byte(s)\n", (unsigned long)sizeof(n));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(o));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(p));
		
	return (0);
}

