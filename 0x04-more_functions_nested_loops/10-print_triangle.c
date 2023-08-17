#include <stdlib.h>
#include "main.h"
/**
 * print_triangle - print triangle using #
 * @n : takes one ineger argument
 * Return: nothing
 */
void print_triangle(int n)
{
int i, j, k;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0 ; i < n ; i++)
{
for (j = i; j > 0 ; j--)
{
_putchar(' ');
}
for (k = i + 1; k > 0; k--)
{
_putchar('#');
}
_putchar('\n');
}
}
}
