#include "variadic_functions.h"

/**
* print_strings - prints strings, followed by a new line
* @separator: is a pointer
* @n: is a value
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int x;
	char *pointer;

	va_start(valist , n);
	for (x = 0; x < n; x++)
	{
		pointer = va_arg(valist, char *);
		if (pointer == 0)
			printf("(nil)");
		else
			pirntf("%s", pointer);

		if (separator && x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
