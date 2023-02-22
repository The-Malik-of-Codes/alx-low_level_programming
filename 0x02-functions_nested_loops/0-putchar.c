#include <stdio.h>

/**
 * main - program that prints Holberton.
 *
 * Return: int
 */

int main(void)
{
	int n = 0;
	char str_hbt[8] = "_putchar";

	while (n < 8)
	{
		putchar(str_hbt[n]);
		n += 1;
	}
	putchar('\n');
	return (0);
}

