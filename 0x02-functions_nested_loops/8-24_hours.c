#include <stdlib.h>
#include "main.h"
/**
 * jack_bauer -print every minute of the day
 * void : takes no argument
 * Return: nothing
 **/
void jack_bauer(void)
{
int i, j, k, m, n;
for (i = 0 ; i < 3 ; i++)
{
if (i < 2)
{
n = 10;
}
else
{
n = 4;
}
for (j = 0; j < n ; j++)
{
for (k = 0; k < 6; k++)
{
for (m = 0; m < 10; m++)
{
_putchar(i + '0');
_putchar(j + '0');
_putchar(':');
_putchar(k + '0');
_putchar(m + '0');
_putchar('\n');

}
}
}

}
}
