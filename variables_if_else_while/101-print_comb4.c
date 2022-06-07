#include <stdio.h>
/**
 * main - Prints a serie of numbers with commas
 *
 * Return: Always
 */

int main(void)
{
int i, x, z;
for (i = '0'; i <= '9'; i++)
{
for (x = i ; x <= '9'; x++)
{
for (z = x ; z <= '9'; z++)
{
if (i != x && x != z && i != z)
{
putchar(i);
putchar(x);
putchar(z);
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
putchar('\n');
return (0);
}
