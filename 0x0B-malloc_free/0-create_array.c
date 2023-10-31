#include <stdlib.h>
#include "main.h"

/**
 * create_array - dynamically creating an array of chars
 * @size: size of the array of chars
 * @c: the string in the array
 * Return: 0 means success except defined otherwise
*/
char *create_array(unsigned int size, char c)
{
	char *memory;
	unsigned int set;

	if (size == 0)
	{
		return (NULL);
	}
	memory = (char *) malloc(size * sizeof(c));

	if (memory == 0)
	{
		return (NULL);
	}
	else
	{
		set = 0;
		while (set < size)
/*While for array*/
		{
			*(memory + set) = c;
			set++;
		}

		return (memory);
	}
}

