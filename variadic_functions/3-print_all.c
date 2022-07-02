#include "variadic_functions.h"
#include <stdio.h>

/**
* print_char - prints char
* @valist: valist
*/

void print_char(va_list valist)
{
	printf("%c", va_arg(valist, char));
}

/**
* print_int - prints int
* @valist: valist
*/
void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
* print_float - prints floats
* @valist: valist
*/
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
* print_string - prints strings
* @valist: valist
*/
void print_string(va_list valist)
{
	char *p;

	p = va_arg(valist, char *);

	if (p == NULL)
	{
		printf("(nil)");
	}
	printf("%s", p);
}

/**
* print_all - print anything value
* @format: an array
*/

void print_all(const char * const format, ...)
{
	char *sep;
	int x, z;
	va_list valist;

	datatype op[] = { {'c', print_char},
			  {'i', print_int},
			  {'f', print_float},
			  {'s', print_string},
			  {'\0', NULL} };

	va_start(valist, format);
	while (format != NULL && format[z] != '\0')
	{
		x = 0;
		while (op[x].letter != '\0')
		{
			if (op[x].letter == format[z])
			{
				printf("%s", sep);
				op[x].f(valist);
				sep = ", ";
			}
			x++;
		}
		z++;
	}
	va_end(valist);
	printf("\n");
}
