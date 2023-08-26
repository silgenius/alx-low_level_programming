#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>

/**
 * main - a program that generates random valid passwords
 * for the program 101-crackme
 *
 * Return: generated password
 */
int main(void)
{
	int i, length, random_index;
	char password[10];

	srand (time(NULL));

	const char *charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	length = 11;

	for (i = 0; i < length; i++)
	{
		random_index = rand() % strlen(charset);
		password[i] = charset[random_index];
	}
	password[i] = '\0';
	printf("%s\n", password);

	return (0);
}
