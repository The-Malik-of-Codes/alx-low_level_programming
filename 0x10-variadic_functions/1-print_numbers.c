#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: pointer param
 * @n: param
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int item;

	va_start(valist, n);

	for (item = 0; item < n; item++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && item < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}

