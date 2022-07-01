#include "variadic_functions.h"

/**
* sum_them_all - return the sum of all its parametres
* @n: is a numb of parametres
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;

	unsigned int x, sum = 0;

	va_start (valist, n)
	for (x = 0; x < n; x++)
	{
		sum += va_arg(valist, int);
	}
	va_end (valist);
	return (sum);
}
