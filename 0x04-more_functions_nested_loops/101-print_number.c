#include <stdlib.h>
#include "main.h"
/**
 * print_number - print any integer number
 * @n : takes one integer number
 * Return: nothing
 **/
void print_number(int n)
{
int i, j, k, m, l, p;
k = n;
m = 0;
p = 1;
while (k != 0)
{
m++;
k = k / 10;
}
if (k == 0)
{
_putchar(0 + '0');
}
for (i = 0; i < m ; i++)
{
p = p * 10;
}
for (i = 0; i < m ; i++)
{
if (n < 0)
{
_putchar('-');
n = n * -1;
}
p = p / 10;
j = n / p;
l = j % 10;
_putchar(l + '0');
}
_putchar('\n');
}
