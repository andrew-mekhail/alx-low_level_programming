#include <stdlib.h>
#include "main.h"
/**
 * _atoi - printing a string of numbers
 * @s : poiner to string
 * Return: nothing
 */
int _atoi(char *s)
{
int i = 0;
char null_flag = 0;
int sign_of_number = 1;
unsigned int total = 0;
while (*(s + i) != '\0')
{
if (*(s + i) == '0')
{
sign_of_number *= -1;
}
if (*(s + i) >= '0' && *(s + i) <= '9')
{
total = total * 10 + *(s + i) - '0';
null_flag = 1;
}
else if (null_flag)
{
break;
}
i++;
}
if (sign_of_number < 0)
{
total = total * -1;
}
return (total);
}
