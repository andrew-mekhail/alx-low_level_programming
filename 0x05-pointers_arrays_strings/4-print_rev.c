#include <stdlib.h>
#include "main.h"
/**
 * _strlen - finding a length of string
 * @s : poiner to string
 * Return: nothing
 */
void print_rev(char *s)
{
int i, j;
i = _strlen(s);
for (j = i-1 ; j >= 0  ; j--)
{
_putchar(*(s + j));
}
_putchar('\n');
}