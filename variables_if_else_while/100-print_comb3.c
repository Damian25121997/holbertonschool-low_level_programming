#include <stdio.h>
/**
 * main - Prints a serie of numbers with commas
 *
 * Return: Always
 */

int main(void)
{
int i, x;
for (i = '0'; i <= '9'; i++)
{
for (x = i ; x <= '9'; x++)
{
if (i < x)
{
putchar(i);
putchar(x);

if
(x != '8' || (x == '8' && i != '9'))
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
return (0);
}
}

