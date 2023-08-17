#include <stdlib.h>
#include "main.h"
/**
 * print_numbers - writes all numbers from 0 to 9
 * void : takes no argument
 * Return: nothing
 */
void print_numbers(void)
{
int i;
for (i = 0 ; i < 10 ; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
