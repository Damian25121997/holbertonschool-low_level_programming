#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * Return: Always
 */

int print_last_digit(int n)
	int a;
{
	if (n < 0)
		
		n = -n;
	
	a = n % 10;
	
	if (a < 0)

		a = -n;
	_putchar(a + '0');
	return (a);

		
}
