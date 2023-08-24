#include <stdlib.h>
#include "main.h"
/**
 * leet - coding some letters into numbers
 * @s : pointer to string
 * Return: pointer to string
 */
char *leet(char *s)
{
char alphabet[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char numbers[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
int j, i = 0;
while (*(s + i) != '\0')
{
for (j = 0; j < 10 ; j++)
{
if (*(s + i) == alphabet[j])
{
*(s + i) = numbers[j];
}
}
i++;
}
return (s);
}
