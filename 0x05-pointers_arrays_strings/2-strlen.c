#include <stdlib.h>
#include "main.h"
/**
 * _strlen - finding a length of string
 * @s : poiner to string
 * Return: nothing
 */
int _strlen(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
i++;
}
return (i);
}
