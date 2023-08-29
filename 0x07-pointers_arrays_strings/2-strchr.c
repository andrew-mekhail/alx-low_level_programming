#include <stdlib.h>
#include "main.h"
/**
 * _strchr - finding char in string and return it
 * @s : pointer to string
 * @c : the char which we will find
 * Return: pointer to the char if found and null if not
 */
char *_strchr(char *s, char c)
{
unsigned int i = 0;
while (*(s + i) != '\0')
{
if (*(s + i) == c)
{
return (*(s + i));
}
i++;
}
return (NULL);
}
