#include <stdlib.h>
#include "main.h"
/**
 * _strncpy - copy one sring to other
 * @src : pointer to string
 * @dest : pointer to string
 * @n  : number of bytes to be copied
 * Return: pointer to string
 */
char *_strncpy(char *dest, char *src, int n)
{
int j = 0;
int i = 0;
while (*(dest + i) != '\0')
{
i++;
}
while ((*(src + j) != '\0') && (j < n))
{
*(dest + j) = *(src + j);
j++;
}
if (i < n)
{
*(dest + j) = '\0';
}
return (dest);
}
