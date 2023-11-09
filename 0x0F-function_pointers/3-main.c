#include <stdio.h>
#include "3-calc.h"
/**
 * main - program that performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int first, second, result;
		char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
		first = atoi(argv[1]);
		second = atoi(argv[3]);

		func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	o = *argv[2];

	if ((o == '/' || o == '%') && second == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(first, second);

	printf("%d\n", result);
	return (0);
}

