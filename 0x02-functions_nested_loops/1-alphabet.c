#include <stdlib.h>
#include "main.h"
/**
 * print_alphabet - writes all the alphabet in stdout
 * void : takes no argument
 * Return: nothing
 */
void  print_alphabet(void)
{
int i;
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
for (i = 0 ; i < 26 ; i++)
{
_putchar(alphabet[i]);
}
_putchar('\n');
}
