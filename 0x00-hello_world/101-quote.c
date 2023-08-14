#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: 'printing using wirte command'
 * Return: Always 0 (Success)
 **/
int main(void)
{
int i;
char output[57] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
for (i = 0 ; i <= 57 ; i++)
{
if (output[i] == ',')
{
putchar(' ');
i++;
}
else
{
putchar(output[i]);
}
}
return (1);
}
