#include <stdlib.h>
#include "main.h"
/**
 * print_diagonal - writes \ as times as the input for the function
 * @n : takes one ineger argument
 * Return: nothing
 */
void print_diagonal(int n)
{
int i, j;
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
_putchar('\\');
_putchar('\n');
}
}
}
