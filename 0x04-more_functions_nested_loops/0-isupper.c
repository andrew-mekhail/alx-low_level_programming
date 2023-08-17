#include <stdlib.h>
#include "main.h"
/**
 * _isupper - checks if the char is uppercase or not
 * @c : takes one intger argument
 * Return: 1 if it is upper 0 otherwise
 **/
int _isupper(int c)
{
int i = c;
if ((i > 64) && (i < 91))
{
return (1);
}
else
{
return (0);
}
}
