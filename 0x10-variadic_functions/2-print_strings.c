#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: pointer param
 * @n: param
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int item;
	char *string;

	va_start(valist, n);

	for (item = 0; item < n; item++)
	{
		string = va_arg(valist, char *);

		if (string)
			printf("%s", string);
		else
			printf("(nil)");

		if (item < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}

