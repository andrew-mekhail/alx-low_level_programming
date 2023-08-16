#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * description : sum all numbers that can be devided by 3 and 5
 * Return: success
 **/
int main(void)
{
int i, sum = 0;
for (i = 3; i < 1025 ; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
sum = sum + i;
}
else if ((i % 3 == 0) && (i % 5 != 0))
{
sum = sum + i;
}
else if ((i % 3 != 0) && (i % 5 == 0))
{
sum = sum + i;
}
}
printf("%d\n", sum);
return (0);
}
