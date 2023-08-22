#include <stdlib.h>
#include "main.h"
/**
 * puts_half - printing a string
 * @str : poiner to string
 * Return: nothing
 */
void puts_half(char *str)
{
int i;
int j = 0;
while (*(str + j) != '\0')
{
j++;
}
if (j % 2 == 0)
{
i = j / 2;
}
else
{
i = (j - 1) / 2;
i = i -1 ;
}
while (*(str + i) != '\0')
{
_putchar(*(str + i));
i++;
}
_putchar('\n');
}
