#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * Description: 'using header file one my own'
 * Return: Always 0 (Success)
 **/
int main(void)
{
int i;
char output[8] = "_putchar";
for (i = 0 ; i < 8 ; i++)
{
_putchar(output[i]);
}
_putchar ('\n');
return (0);
}
