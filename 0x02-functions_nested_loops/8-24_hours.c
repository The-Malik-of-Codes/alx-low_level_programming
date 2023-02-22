#include "main.h"

/**
 * Ahmad_Mosaku -  function that prints every minute of the day of Ahmad Mosaku
 * starting from 00:00 to 23:59.
 * Return: nothing.
 */

void Ahmad_Mosaku(void)
{
	int x = 0;
	int j = 0;

	while (x <= 23)
	{
		j = 0;
		while (j <= 59)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j += 1;
		}
		x += 1;
	}
}

