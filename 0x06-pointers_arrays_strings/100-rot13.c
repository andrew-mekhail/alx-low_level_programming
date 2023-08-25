#include <stdlib.h>
#include "main.h"
/**
 * rot13 - coding some letters into other letters
 * @s : pointer to string
 * Return: pointer to string
 */
char *rot13(char *s)
{
char alphabet1[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char alphabet2[52] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};
int j, i = 0;
while (*(s + i) != '\0')
{
for (j = 0; j < 52 ; j++)
{
if (*(s + i) == alphabet1[j])
{
*(s + i) = alphabet2[j];
}
}
i++;
}
return (s);
}
