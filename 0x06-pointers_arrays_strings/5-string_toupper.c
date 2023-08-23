#include <stdlib.h>
#include "main.h"
/**
 * string_toupper - storing string  in uppercase
 * @s : pointer to string
 * Return: pointer to char
 */
char *string_toupper(char *s)
{
int i;
i = 0;
while (*(s + i) != '\0')
{
if ((*(s + i) > 96) && (*(s + i) < 123))
{
*(s + i) = *(s + i) -32;
}
i++;
}
return (s);
}
