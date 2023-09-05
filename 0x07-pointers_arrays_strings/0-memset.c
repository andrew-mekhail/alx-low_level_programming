#include <stdlib.h>
#include "main.h"
/**
 * _memset - storing char in some memory
 * @s : poiner to string
 * @b : the value that will be stored
 * @n : the memeory size
 * Return: pointer to char
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
