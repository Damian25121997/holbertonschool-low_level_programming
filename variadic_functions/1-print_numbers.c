#include "variadic_functions.h"

/**
* print_numbers - prits numbers, followed by new line
* @separator: is a pointer
* @n: is a value
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int x;

	va_start(valist, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(valist, int);

		if (separator && x < n - 1)
		printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
