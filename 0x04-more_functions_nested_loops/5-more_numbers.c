#include <stdlib.h>
#include "main.h"
/**
 * more_numbers - writes all numbers from 0 to 14 for 10 times
 * void : takes no argument
 * Return: nothing
 */
void more_numbers(void)
{
int i, j, k, m;
for (j = 0 ; j < 10 ; j++)
{
for (i = 0 ; i < 15 ; i++)
{
if (i > 9)
{
k = i / 10;
_putchar(k + '0');
}
m = i % 10;
_putchar(m + '0');

}
_putchar('\n');
}
}
