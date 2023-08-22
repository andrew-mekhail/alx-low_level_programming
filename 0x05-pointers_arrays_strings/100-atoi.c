#include <stdlib.h>
#include "main.h"
/**
 * _atoi - printing a string of numbers
 * @s : poiner to string
 * Return: nothing
 */
int _atoi(char *s)
{
int i;
if (*(s + 0) < 0)
{
_putchar('-');
}
while (*(s + i) != '\0')
{
if (*(s + i) > 57 || *(s + i) < 48)
{
break;
}
_putchar(*(s + i));
i++;
}
return (0);
}
