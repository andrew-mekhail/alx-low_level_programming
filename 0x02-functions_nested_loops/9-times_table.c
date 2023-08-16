#include <stdlib.h>
#include "main.h"
/**
 * times_table -print from 0 to 9 times table
 * void : takes no argument
 * Return: nothing
 **/
void times_table(void)
{
int i, j, k, m, n;
for (i = 0 ; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
k = i * j;
if ((k == 0) && (j == 9))
{
_putchar(k + '0');
_putchar('\n');
}
else if ((k == 0) && (j != 9))
{
_putchar(k + '0');
_putchar(',');
_putchar(' ');
}
else if ((k != 0) && (k < 10) && (j ==  9))
{
_putchar(k + '0');
_putchar('\n');
}
else if ((k != 0) && (k < 10) && (j != 9))
{
_putchar(k + '0');
_putchar(',');
_putchar(' ');
}
else if ((k != 0) && k > 9 && j == 9)
{
m = k / 10;
n = k % 10;
_putchar(m + '0');
_putchar(n + '0');
_putchar('\n');
}
else if ((k != 0) && k > 9 && j != 9)
{
m = k / 10;
n = k % 10;
_putchar(m + '0');
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
}
}
}
