#include <stdlib.h>
#include "main.h"
/**
 * _abs - checks the abslute value  of integer
 * @c : takes one intger argument
 * Return: the absolute value
 **/
int _abs(int c)
{
int i = c;
if (i > 0)
{
return (i);
}
else if (i < 0)
{
i = i * (-1);
return (i);
}
else
{
return (0);
}
}
