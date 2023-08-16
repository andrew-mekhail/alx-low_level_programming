#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * description : printing fibonacci numbers
 * Return: success
 **/
int main(void)
{
int i;
unsigned long int number1, number2, number3;
number1 = 1;
number2 = 2;
printf("%lu, ", number1);
printf("%lu, ", number2);
for (i = 0; i < 97; i++)
{
number3 = number2 + number1;
number1 = number2;
number2 = number3;
if (i == 96)
{
printf("%lu\n", number3);
}
else
{
printf("%lu, ", number3);
}
}

return (0);
}
