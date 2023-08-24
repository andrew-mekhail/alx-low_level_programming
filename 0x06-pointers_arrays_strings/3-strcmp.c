#include <stdlib.h>
#include "main.h"
/**
 * _strcmp - comparing between two strings
 * @s1 : pointer to string
 * @s2 : pointer to string
 * Return: integer 0 if equal -15 if frist oe is less than second one
 *  15 if first one is bigger
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
int j = 0;
while (*(s1 + i) != '\0')
{
i++;
}
while (*(s2 + j) != '\0')
{
j++;
}
if (i == j)
{
return (0);
}
else if (i > j)
{
return (15);
}
else if (i < j)
{
return (-15);
}
}
