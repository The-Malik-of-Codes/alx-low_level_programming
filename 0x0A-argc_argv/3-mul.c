#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main -  multiplication of two integers
 * @argc: argument count
 * @argv: array of argument passed
 * Return: 0 if it works, 1 if there is an ERROR
*/
int main(int argc, char **argv)
{
	int first, second, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	first = atoi(argv[1]);
	second = atoi(argv[2]);
	product = first * second;

	printf("%i\n", product);

	return (0);
}

