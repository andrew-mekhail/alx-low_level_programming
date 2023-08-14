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
char output[32] = "and that piece of art is useful\"";
char output2[16] = " - Dora Korpar, ";
char output3[10] = "2015-10-19";
for (i = 0 ; i < 32 ; i++)
{
putchar(output[i]);
}
for (i = 0 ; i < 16; i++)
{
putchar(output2[i]);
}
for (i = 0 ; i < 10 ; i++)
{
if (output3[i] == '-')
{
putchar(output3[i]);
}
else
{
putchar(output3[i] + '0');
}

}
putchar('\n');
return (1);
}
