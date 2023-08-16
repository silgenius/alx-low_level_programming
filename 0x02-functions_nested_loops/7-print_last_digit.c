#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description:  a function that
 * prints the last digit of a number.
 *
 * @n: number to be checked
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	n %= 10;
	return (n + '0');/*Convert numeric value to character*/
}
