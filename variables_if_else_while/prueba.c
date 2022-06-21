#include <stdio.h>
int main(void)
{
int a, b, c, d;
for (a = '0'; a <= '9'; a++)
{
for (b = '0'; b <= '9'; b++)
{
for (c = a; c <= '9'; c++)
{
for(d = b; c <= '9'; d++)
{
if (b != d)
{
printf(a);
printf(b);
printf(' ');
printf(c);
printf(d);
printf('-');
}
}
}
}
}
return(0);
}
