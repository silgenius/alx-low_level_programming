#include <stdio.h>
#include "main.h"

/**
 * main - main entry
 * description - print all alphabet in lowercase
 *
 * Return: (0)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - print all alphabeth in lowercase
 * description - vvoid funtion for print_alphabet
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	putchar('\n');
}

