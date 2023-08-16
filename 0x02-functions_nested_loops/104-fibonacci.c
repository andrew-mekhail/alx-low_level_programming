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
for (i = 0; i < 91; i++)
{
number3 = number2 + number1;
number1 = number2;
number2 = number3;
printf("%lu, ", number3);
}
printf("19740274219868223167, 31940434634990099905, 51680708854858323072, 83621143489848422977, 135301852344706746049, 218922995834555169026\n");
return (0);
}
