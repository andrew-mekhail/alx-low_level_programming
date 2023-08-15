#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - printing numbers to 98
 * @n  : first number to sum
 * Return: nothing
 **/
void print_to_98(int n)
{
int i;
if (n < 99)
{
for (i = n; i < 99 ; i++)
{
if (i == 98)
{
printf("%d", i);
continue;
}
printf("%d, ", i);
}
}
else
{
for (i = n; i > 97 ; i--)
{
if (i == 98)
{
printf("%d", i);
continue;
}
printf("%d, ", i);
}
}
printf("\n");
}
