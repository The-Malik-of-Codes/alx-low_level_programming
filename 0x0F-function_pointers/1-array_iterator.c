#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array
 * @array:  the array  which the function acts on.
 * @size: size of the passed array
 * @action: the function that acts on the array elements
 * Return: no return cause we've declared VOID
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int iterable;

	if (!array || !action)
		return;

	for (iterable = 0; iterable < size; iterable++)
		action(array[iterable]);
}

