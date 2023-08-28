#include <stdlib.h>
#include "main.h"
/**
 * _memcpy - storing char in some memory
 * @dest : pointer to destination memory
 * @src : pointer for surce memory
 * @n : the memeory size
 * Return: pointer to destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
for (i = 0 ; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
