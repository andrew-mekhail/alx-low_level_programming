#include <stdlib.h>
#include "main.h"
/**
 * print_alphabet_x10 - writes all the alphabet in stdout 10 times
 * void : takes no argument
 * Return: nothing
 */
void  print_alphabet_x10(void)
{
int i, j;
for (j = 0 ; j < 10 ; j++)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
for (i = 0 ; i < 26 ; i++)
{
_putchar(alphabet[i]);
}
_putchar('\n');
}
}
