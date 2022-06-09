#include "main.h"

/**
 * print_sing - print +, 0 and -
 * @n: The print to int
 * Return: Always
 */

int print_sign(int n)
{
	if (n > 0)
		{
		_putchar('+');
		return (1);
		
	} else if (n == 0)
		{
		_putchar('0');
		return (0);
		
	} else
		(n < 0)
		{
		_putchar('-')
		return (-1);
		}

}
