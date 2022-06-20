#include "main.h"

/**
* _sqrt_recursion - return the natural square root of a number
* @n: is a variable
* Return: Always
*/

int h_sqrt_rec (int x, int z)
{
	if (x * x == z)
	{
		return (x);
	}
	if (x * x > z)
	{
		return (-1);
	}
	else
		return (h_sqrt_rec(x + 1, z));
}

int _sqrt_recursion(int n)
{
	int y = 1;

	return (h_sqrt_rec(y, n));
}
