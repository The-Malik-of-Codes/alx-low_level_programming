#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int iterable;

	if (array && cmp)
	{
		for (iterable = 0; iterable < size; iterable++)
		{
			if (cmp(array[iterable]) != 0)
				return (iterable);
		}
	}
	return (-1);
}

