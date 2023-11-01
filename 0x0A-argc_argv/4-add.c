#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * @argc: param count
 * @argv: param poiter
 * Return: int
*/
int main(int argc, char *argv[])
{
	int first, second, sum = 0;

	for (first = 1; first < argc; first++)
	{
		for (second = 0; argv[first][second] != '\0'; second++)
		{
			if (!isdigit(argv[first][second]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[first]);
	}
	printf("%d\n", sum);
	return (0);
}

