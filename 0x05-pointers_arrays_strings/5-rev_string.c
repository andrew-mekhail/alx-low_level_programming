#include <stdlib.h>
#include "main.h"
/**
 * rev_string - storing string  in reverse way
 * @s : poiner to string
 * Return: nothing
 */
void rev_string(char *s)
{
int i, j;
char temp;
i = 0;
while (*(s + i) != '\0')
{
i++;
}
for (j = 0 ; j < i / 2  ; j++)
{
temp = *(s + i - 1 - j);
*(s + i - 1 - j) = *(s + j);
*(s + j) = temp;
}
}
