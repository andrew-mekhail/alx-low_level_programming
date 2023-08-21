#include <stdlib.h>
#include "main.h"
/**
 * _puts - printing a string
 * @str : poiner to string
 * Return: nothing
 */
void _puts(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
_putchar(*(str + i));
i++;
}
_putchar('\n');
}
