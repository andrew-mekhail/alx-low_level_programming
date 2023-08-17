#include <stdlib.h>
#include "main.h"
/**
 * print_line - writes _ as times as the input for the function
 * @n : takes one ineger argument
 * Return: nothing
 */
void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
else 
{
for (i = 0 ; i < n ; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
