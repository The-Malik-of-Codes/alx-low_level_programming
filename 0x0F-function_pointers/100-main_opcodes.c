#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
*/
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
		int iterable, nobytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nobytes = atoi(argv[1]);

	if (nobytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (iterable = 0; iterable < nobytes; iterable++)
	{
		printf("%02x", opc[iterable] & 0xFF);
		if (iterable != nobytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}

