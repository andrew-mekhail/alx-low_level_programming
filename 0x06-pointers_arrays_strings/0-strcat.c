#include <stdlib.h>
#include "main.h"
/**
 * _strcat - printing two strings after each other as one string
 * @src : pointer to string
 * @dest : pointer to string
 * Return: pointer to string
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (*(dest + i) != '\0')
{
_putchar(*(dest + i));
i++;
}
while (*(src + j) != '\0')
{
*(dest + i) = *(src + j);
j++;
i++;
}
*(dest + i) = '\0';
return (dest);
}
