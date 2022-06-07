#include <stdio.h>
/**
 * main - Print the alphabetic
 *
 * Return: Always
 */

int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
if (i != 'e' && i != 'q')
{
putchar(i);
}
}

putchar('\n');
return (0);
}
