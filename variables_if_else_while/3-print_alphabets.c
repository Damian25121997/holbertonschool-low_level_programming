#include <stdio.h>
/**
 * main - Print the alphabetic in lower and upper case
 *
 * Return: Always
 */

int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
putchar(i);
for (i = 'A'; i <= 'Z'; i++)
putchar(i);
putchar('\n');
return (0);
}
