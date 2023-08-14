/*here are the header */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'printing hexadicimal'
 * Return: Always 0 (Success)
 **/
int main(void)
{
char alphabet[6] = "abcdef";
int i;

for (i = 0; i < 10; i++)
{
putchar (i + '0');
}
int j;

for (j = 0 ; j < 6 ; j++)
{
putchar(alphabet[j]);
}
putchar('\n');
return (0);
}
