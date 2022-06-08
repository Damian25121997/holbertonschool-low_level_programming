#include <stdio.h>
/**
 * main - Prints a serie of numbers with commas
 *
 * Return: Always
 */

int main(void)
{
int i, x, z, y;
for (i = '0'; i <= '9'; i++)
{
for (x = '0' ; x <= '9'; x++)
{
for (z = i ; z <= '9'; z++)
{
for (y = x ; y <= '9'; y++)
{
if ((x != y) || (i != z))
{
putchar(i);
putchar(x);
putchar(' ');
putchar(z);
putchar(y);
if
((i != '9' && x != '8') || (z != '9' && y != '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
