#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function thats prints a name
 * @name: char to display to the stdout
 * @f: A pointer function
 * Return: No return cause we've declared VOID as R_TYPE
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

