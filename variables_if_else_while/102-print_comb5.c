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
for (z = '0' ; z <= '9'; z++)
{
for (y = (z + 1) ; y <= '9'; y++)
{
if (i == x && x != z && i != z)
{
putchar(i);
putchar(x);
putchar(' ');
putchar(z);
putchar(y);
if
(i != '7' || x != '8' || z != '9')
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
