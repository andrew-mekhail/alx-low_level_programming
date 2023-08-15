#include <stdlib.h>
#include "main.h"
/**
 * _islower - checks if the char is lowercase or not
 * @c : takes one intger argument
 * Return: 1 if it is lower 0 otherwise
 **/
int _islower(int c)
{
int i = c;
if ((i > 96) && (i < 123))
{
return (1);
}
else
{
return (0);
}
}
