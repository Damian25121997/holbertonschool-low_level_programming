#include "main.h"

/**
* _prime_number - check the code
* @n: is a variable
* @r: is a variable
* Return: Always
*/

int _prime_number(int n, int r)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n % r == 0 && n != r)
	{
		return (0);
	}
	else if (n == r)
	{
		return (1);
	}
	return (_prime_number(n, r + 1));
	
}

/**
* is_prime_number - return `1` if the input is a prime number
* @n: is a variable
* Return: Always
*/

int is_prime_number(int n)
{
	return (_prime_number(n, 2));
}
