#include <stdlib.h>
#include "main.h"
/**
 * _strncat - printing two strings after each other as one string
 * @src : pointer to string
 * @dest : pointer to string
 * @n  : number of bytes to be copied
 * Return: pointer to string
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (*(dest + i) != '\0')
{
i++;
}
while ((*(src + j) != '\0') && (j < n))
{
*(dest + i) = *(src + j);
j++;
i++;
}
*(dest + i) = '\0';
return (dest);
}
