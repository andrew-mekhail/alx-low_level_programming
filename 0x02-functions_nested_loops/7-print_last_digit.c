#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - finding the last digit of integer
 * @c : takes one intger argument
 * Return: the last digit of integer
 **/
int print_last_digit(int c)
{
int i = c;
if ( i < 0)
{
i = i * (-1);
}
i = i % 10;
_putchar(i + '0');
return (i);
}
