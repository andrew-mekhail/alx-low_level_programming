#include <stdlib.h>
#include "main.h"
/**
 * times_table -print from 0 to 9 times table
 * void : takes no argument
 * Return: nothing
 **/
void print_times_table(int a)
{
int i, j, k, m, n, p, q;
if ( a > 0 && a < 16)
{
for (i = 0 ; i < a + 1; i++)
{
for (j = 0; j < a + 1; j++)
{
k = i * j;
if ((k == 0) && (j == a))
{
if (a > 9)
{
_putchar(' ');
}
_putchar(' ');
_putchar(k + '0');
_putchar('\n');
}
else if ((k == 0) && (j == 0))
{
_putchar(k + '0');
_putchar(',');
_putchar(' ');
}
else if ((k == 0) && (j != a))
{
if (a > 9)
{
_putchar(' ');
}
_putchar(' ');
_putchar(k + '0');
_putchar(',');
_putchar(' ');
}
else if ((k != 0) && (k < 10) && (j == a))
{
if (a > 9)
{
_putchar(' ');
}
_putchar(' ');
_putchar(k + '0');
_putchar('\n');
}
else if ((k != 0) && (k < 10) && (j != a))
{
if (a > 9)
{
_putchar(' ');
}
_putchar(' ');
_putchar(k + '0');
_putchar(',');
_putchar(' ');
}
else if ((k != 0) && k > 9 && k < 100 && j == a)
{
m = k / 10;
n = k % 10;
_putchar(m + '0');
_putchar(n + '0');
_putchar('\n');
}
else if ((k != 0) && k > 9 && k < 100 && j != a)
{
m = k / 10;
n = k % 10;
_putchar(m + '0');
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
else if ((k != 0) && k > 99 && j != a)
{
m = k / 100;
p = k / 10;
n = k % 10;
q = p % 10;
_putchar(m + '0');
_putchar(q + '0');
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
else if ((k != 0) && k > 99 && j == a)
{
m = k / 10;
p = k / 10;
n = k % 10;
q = p % 10;
_putchar(m + '0');
_putchar(q + '0');
_putchar(n + '0');
_putchar('\n');
}

}
}
}
}
