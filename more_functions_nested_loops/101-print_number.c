#include "main.h"
void print_number_xd(unsigned int n);
/**
* print_number - prints a numbers
* @n: is a number
*/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print_number_xd(-(unsigned int)n);
	}
	else
		print_number_xd(n);
}

/**
* print_number_xd - print a number
* @n: a number
*/
void print_number_xd(unsigned int n)
{
	if (n / 10 != 0)
	{
		print_number_xd(n / 10);
	}
	_putchar((n % 10) + '0');
}
