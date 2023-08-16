#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: a function that prints
 * every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 00; i <= 23; i++)
	{
		for (j = 00; j <= 59; j++)
		{
			_putchar((i / 10) + '0'); /* Print tens digit of hour */
			_putchar((i % 10) + '0'); /* Print ones digit of hour */
			_putchar(':');
			_putchar((j / 10) + '0'); /* Print tens digit of minutes */
			_putchar((j % 10) + '0'); /* Print ones digit of minutes */
			_putchar('\n');
		}
	}
}

