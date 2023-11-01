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
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}

