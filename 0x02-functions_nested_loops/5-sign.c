#include <stdlib.h>
#include "main.h"
/**
 * print_sign - checks the sign of integer
 * @c : takes one intger argument
 * Return: 1 if it is positive -1 if it is negative 0 otherwise
 **/
int print_sign(int c)
{
int i = c;
if (i > 0)
{
_putchar('+');
return (1);
}
else if (i < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar ('0');
return (0);
}
}
