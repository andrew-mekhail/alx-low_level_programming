#include <stdlib.h>
#include "main.h"
/**
 * _strspn - finding the first bytes that have acccpt string
 * @s : pointer to string to search in
 * @accept : pointer for string which will search for
 * Return: number of bytes that contains the accept string
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
unsigned int j;
unsigned int last_byte = 0;
while (*(accept + i) != '\0')
{
j = 0;
while (*(s + j) != '\0')
{
if (*(accept + i) == *(s + j))
{
if (j > last_byte)
{
last_byte = j;
break;
}
}
j++;
}
i++;
}
return (last_byte);
}
