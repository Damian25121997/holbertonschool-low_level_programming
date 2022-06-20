#include "main.h"
/**
* factorial - return the factorial of a give number.
* @n: is a variable
* Return: Always
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
		return (1);
}
