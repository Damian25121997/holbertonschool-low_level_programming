#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print a text according number
 *
 * Return: Always
 */
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n);

	else if (x == 0)
		printf("Last digit of %d is %d and is 0\n", n);

	else if (x < 6 && x != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n);

	return (0);
}
