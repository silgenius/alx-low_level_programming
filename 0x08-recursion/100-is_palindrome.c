#include "main.h"

/**
 * len - Calculates the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len(s + 1));
}

/**
 * palindrome_checker - Helper function to check if a string is a palindrome.
 * @n: The remaining length to check.
 * @s: The input string.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int palindrome_checker(int n, char *s)
{
	if (n <= 1)
		return (1);
	if (*s != s[n - 1])
		return (0);
	return (palindrome_checker(n - 2, s + 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = len(s);

	return (palindrome_checker(length, s));
}
