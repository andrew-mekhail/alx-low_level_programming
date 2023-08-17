#include <stdlib.h>
#include "main.h"
/**
 * _isdigit - checks if the char is digit or not
 * @c : takes one intger argument
 * Return: 1 if it is digit 0 otherwise
 **/
int _isdigit(int c)
{
int i = c;
if ((i > 47) && (i < 58))
{
return (1);
}
else
{
return (0);
}
}
