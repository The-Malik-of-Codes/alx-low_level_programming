#include <stdio.h>
#include "main.h"
/**
 * main - Print the name of the program
 *  @argc: Count the command line arguments
 *  @argv: Arguments
 *  Return: Always 0
*/
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}

