#include <stdio.h>
/**
 * main - Prints a hexadecimal
 *
 * Return: Always
 */

int main(void)
{
char i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}