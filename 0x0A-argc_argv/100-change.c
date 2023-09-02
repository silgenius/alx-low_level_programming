#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the minimum number of coins to make change for an amount of money
 *
 * @argc: arguement count
 * @argv: arguememt vector
 * Return: 0 always (success)
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
        int coin_count, i;
	int cents = atoi(argv[1]);

	coin_count = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			coin_count++;
		}
	}

	printf("%d\n", coin_count);

	return (0);
}

