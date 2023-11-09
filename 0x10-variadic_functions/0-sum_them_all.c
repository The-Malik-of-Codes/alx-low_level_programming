#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: param
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int item;
	int total = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (item = 0; item < n; item++)
		total += va_arg(valist, int);

	va_end(valist);

	return (total);
}

