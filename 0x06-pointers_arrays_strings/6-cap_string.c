#include <stdlib.h>
#include "main.h"
/**
 * cap_string - storing string  in uppercase after some chars
 * @s : pointer to string
 * Return: pointer to char
 */
char *cap_string(char *s)
{
int i;
i = 0;
while (*(s + i) != '\0')
{
if ((*(s + i) == ' ') || (*(s + i) == '\n') || (*(s + i) == ','))
{
i++;
if ((*(s + i) > 96) && (*(s + i) < 123))
{
*(s + i) = *(s + i) -32;
}
i--;
}
else if ((*(s + i) == ';') || (*(s + i) == '.') || (*(s + i) == '!'))
{
i++;
if ((*(s + i) > 96) && (*(s + i) < 123))
{
*(s + i) = *(s + i) -32;
}
i--;
}
else if ((*(s + i) == '?') || (*(s + i) == '"') || (*(s + i) == '('))
{
i++;
if ((*(s + i) > 96) && (*(s + i) < 123))
{
*(s + i) = *(s + i) -32;
}
i--;
}
else if ((*(s + i) == ')') || (*(s + i) == '{') || (*(s + i) == '}'))
{
i++;
if ((*(s + i) > 96) && (*(s + i) < 123))
{
*(s + i) = *(s + i) -32;
}
i--;
}
i++;
}
return (s);
}
