#include <stdio.h>
/**
 * main - Prints a serie of numbers with commas
 *
 * Return: Always
 */

int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);

if (i != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
