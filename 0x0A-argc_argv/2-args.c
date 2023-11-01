#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into the program
 * @argc: Count the number of arguments passed into the program
 * @argv: argument passed into the program
 * Return: Always 0 (Success)
*/
int main(int argc, char **argv)
{
	int countArgument = 0;

	if (argc > 0)
	{
		while (countArgument < argc)
		{
			printf("%s\n", argv[countArgument]);
			countArgument++;
		}
	}
	return (0);
}

